#include <limits>
#include <iostream>
#include <boost/operators.hpp>

//Step up the value to a limit

template <
    typename Int=unsigned int,
    Int Max=std::numeric_limits<Int>::max()>
struct BoundedInt : boost::operators<BoundedInt<Int, Max> >
{
    BoundedInt(const Int& value) : _value(value) {}

    Int get() const { return std::min(Max, _value); }
    operator Int() const { return get(); }

    friend std::ostream& operator<<(std::ostream& os, const BoundedInt& bi)
    { return std::cout << bi.get() << " [hidden: " << bi._value << "]"; }

    bool operator<(const BoundedInt& x) const   { return get()<x.get(); }
    bool operator==(const BoundedInt& x) const  { return get()==x.get(); }
    BoundedInt& operator+=(const BoundedInt& x) { _value = get() + x.get(); return *this; }
    BoundedInt& operator-=(const BoundedInt& x) { _value = get() - x.get(); return *this; }
    BoundedInt& operator*=(const BoundedInt& x) { _value = get() * x.get(); return *this; }
    BoundedInt& operator/=(const BoundedInt& x) { _value = get() / x.get(); return *this; }
    BoundedInt& operator%=(const BoundedInt& x) { _value = get() % x.get(); return *this; }
    BoundedInt& operator|=(const BoundedInt& x) { _value = get() | x.get(); return *this; }
    BoundedInt& operator&=(const BoundedInt& x) { _value = get() & x.get(); return *this; }
    BoundedInt& operator^=(const BoundedInt& x) { _value = get() ^ x.get(); return *this; }
    BoundedInt& operator++() { _value = get()+1; return *this; }
    BoundedInt& operator--() { _value = get()-1; return *this; }

    private:
        Int _value;
};

typedef BoundedInt<unsigned int, 10> max100;

int main(){
    max100 i = 1;

    // std::cout << (i*= 10) << std::endl;
    // std::cout << (i*= 20) << std::endl;
    // std::cout << (i+= 10) << std::endl;

    for(int j = 0; j < 15; j++){
        i++;
        std::cout << i << std::endl;
    }
}