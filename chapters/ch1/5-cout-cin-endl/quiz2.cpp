#include <iostream>

// Question #2

// Ask the user to enter three values.The program should then print these values.Add an appropriate comment above function main().

// The program should match the following output(when run with input values 4, 5, and 6) :
// Enter three numbers : 4 5 6
// You entered 4, 5, and 6.

int main()
{
    std::cout << "Enter three numbers: "; // ask user for a number
    int x{}, y{}, z{};                    // define variable x to hold user input
    std::cin >> x >> y >> z;

    std::cout << "You entered "
              << x << ", "
              << y << ", and "
              << z << ".\n";
}