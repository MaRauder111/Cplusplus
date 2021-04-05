//std::make_heap(v.begin(), v.end());
//for the heap we need to squash it to a vector or array
//numbers.push_back(8.88);
//std::push_heap(begin(numbers), end(numbers));
#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    int myheap [] = {10,20,30,40,50};
    std::vector<int> v(myheap,myheap+5);

    std::make_heap (v.begin(), v.end());
    std::cout << "Testing heap " << v.front() << std::endl;

    v.push_back(8);
    std::push_heap(v.begin(), v.end());
    std::cout << "Heap front " << v.front() << " Heap back " <<  v.back()<< std::endl;

    std::pop_heap (v.begin(), v.end());
    v.pop_back();
    std::cout << "After pop heap " << v.front() << std::endl;

}