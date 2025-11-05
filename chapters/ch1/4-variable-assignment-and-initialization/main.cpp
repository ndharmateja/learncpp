#include <iostream>

int main()
{
    // initialization of variable width
    // { 5 } is the initializer, and 5 is the initial value.
    int width{5};
    std::cout << width << std::endl;

    // 5 common forms of initialization
    // 1. default initialization (no initializer)
    // value of 'a' is indeterminate or not predicatable or a "garbage value"
    int a;

    // traditional initialization
    // 2. copy intialization (initial value after equals sign)
    int b = 6;
    std::cout << b << std::endl;
    // 3. direct initialization (initial value in paranthesis)
    int c(7);
    std::cout << c << std::endl;

    // modern initialization forms (preferred)
    // 4. direct list initialization (initial value in braces)
    int d{8};
    std::cout << d << std::endl;
    // 5. value initialization (empty braces)
    int e{};
    std::cout << e << std::endl;

    // list initialization disallows narrow conversions
    // compile errors: list-init doesn't allow narrowing conversion
    // int w1{4.5};

    int w2 = 4.5; // copy initialized to value 4
    int w3(4.5);  // direct initialized to value 4
    std::cout << "w2: " << w2 << ", w3: " << w3 << std::endl;

    // We can initialize multiple variables at once
    int x1 = 5, x2 = 6; // copy-initialization
    int x3(7), x4(8);   // direct-initialization
    int x5{9}, x6{10};  // direct-list-initialization
    int x7{}, x8{};     // value-initialization
    std::cout << "x1: " << x1 << ", x2: " << x2 << std::endl;
    std::cout << "x3: " << x3 << ", x4: " << x4 << std::endl;
    std::cout << "x5: " << x5 << ", x6: " << x6 << std::endl;
    std::cout << "x7: " << x7 << ", x8: " << x8 << std::endl;

    // maybe unused attribute
    // even though x10 is not used, there won't be a compiler warning
    [[maybe_unused]] int x9{11}, x10{12};
    std::cout << "x9: " << x9 << std::endl;

    return 0;
}