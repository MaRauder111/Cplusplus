/* Macros. There are two types of macro. Object-like macro and function-like macro.
*/

#include <iostream>
// Object like macro with substitution
#define MY_NAME "Bob"
// Object like macro without substitution
#define PRINT_BOB

int main(){
    std::cout << "My name is : " << MY_NAME << '\n';

#ifdef PRINT_BOB
    std::cout << "Bob" << '\n';
#endif

#ifdef PRINT_ALEX
    std::cout << "Alex";
#endif
    // The above Alex is not print because #define PRINT_ALEX has not been defined

#if 0
    std::cout << "Bob\n";
    std::cout << "Alex\n";
#endif

    return 0;
}
