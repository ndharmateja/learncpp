#include <iostream> // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x{};                         // define variable x to hold user input
    std::cin >> x;                   // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';

    // If 'h' is entered, 0 is printed
    // as an integer cannot hold a letteer, extraction completely fails
    // x is assigned value 0 via copy assignment

    // If '3.2' is entered, 3 is printed
    // The fractional part is dropped (not rounded)
    // Given the number 3.2, the 3 gets extracted, but . is an invalid character, so extraction stops here. The .2 remains for a future extraction attempt.

    // If a really big number (> 2^31) is entered, we
    // are most likely to get 2147483647
    // If you enter a value larger than the largest number x can hold, it will be set to the largest number that x can hold (which is probably 2147483647, but might be different on your system)

    // If '+5' is entered, 5 is printed
    // Plus is a valid symbol at the start of a number (just as a minus sign would be), so it is extracted. The 5 is also extracted
    return 0;
}