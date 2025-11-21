#include <iostream>

int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << "this is a number: " << 42 << std::endl;

    int x{32};
    std::cout << "this is a list initialized number: " << x << std::endl;

    std::cout << "multiple " << "things" << std::endl;

    // std::cout is buffered
    // it is line buffered, so std::endl flushes the buffer
    // => If the program crashes/aborts before the buffer is flushed
    // any output still waiting in the buffer won't be displayed

    // If we are using std::endl just for the newline
    // then it is better to use "\n" instead as it won't flush the buffer
    // and will let the C++'s output system to self-flush periodically
    // simpler and more efficient to let it self-flush
    int y{42};
    std::cout << "x is: " << x << '\n'; // single quoted
    std::cout << "Yep!!" << "\n";       // double quoted
    std::cout << "Bye!\n";              // between double quotes

    // Best practice: Prefer \n to std::endl

    return 0;
}