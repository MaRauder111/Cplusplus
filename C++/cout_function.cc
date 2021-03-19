// Testing the namespace it will conflict
// #include <iostream> // imports the declaration of std::cout

// using namespace std; // makes std::cout accessible as "cout"

// int cout() // declares our own "cout" function
// {
//     return 5;
// }

// int main()
// {
//     cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?

//     return 0;
// }


// This will not have conflict cout
// using namespace std; is a bad practice
#include<iostream>

int cout(){
    return 6;
}

int main(){
    std::cout << "Hello World" << '\n';
    std::cout << cout() << '\n';
    return 0;
}