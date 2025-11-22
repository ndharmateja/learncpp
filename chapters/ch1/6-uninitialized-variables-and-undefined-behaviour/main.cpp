#include <iostream>

void nothing(int &x)
{
    std::cout << x << std::endl; // Can produce garbage
}

int main()
{
    // Initialized = The object is given a known value at the point of definition.
    // Assignment = The object is given a known value beyond the point of definition.
    // Uninitialized = The object has not been given a known value yet. an object that is not initialized but is then assigned a value is no longer uninitialized (because it has been given a known value).

    // Best practice: you should always initialize your variables because the cost of doing so is minuscule compared to the benefit
    // Uninitialized variables can be one of the most challenging to debug (because the program may run fine anyway if the uninitialized variable happened to get assigned to a spot of memory that had a reasonable value in it, like 0).
    int x;

    // To avoid compiler warnings, we make it seem like we are assigning a value to x
    nothing(x);

    std::cout << x << std::endl; // Can produce garbage

    // Undefined behavior
    // Using the value from an uninitialized variable is our first example of undefined behavior.
    // Undefined behavior(often abbreviated UB) is the result of executing code whose behavior is not well - defined by the C++ language

    // Rule: Take care to avoid all situations that result in undefined behavior, such as using uninitialized variables.

    // n some cases, the C++ language standard allows the implementation to determine how some aspect of the language will behave, so that the compiler can choose a behavior that is efficient for a given platform.
    // Behavior that is defined by the implementation is called implementation-defined behavior.
    // Implementation-defined behavior must be documented and consistent for a given implementation.
    // Eg: sizeof(int) can be 4 or 2 depending on the platform

    // Best practice: Avoid implementation-defined and unspecified behavior whenever possible, as they may cause your program to malfunction on other implementations.

    return 0;
}