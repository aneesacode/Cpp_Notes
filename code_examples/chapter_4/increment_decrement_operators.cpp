#include <iostream>

int main() {
    // Increment and decrement
    // ++i  prefix increment: increase i, then use the new value
    // i++  postfix increment: use the old value, then increase i
    // --i  prefix decrement and i-- postfix decrement work similarly

    int i = 5;
    std::cout << "i = " << i << "\n";
    std::cout << "i++ prints: " << i++ << "  and now i = " << i << "\n"; // prints 5, then i becomes 6

    i = 5;
    std::cout << "++i prints: " << ++i << "  and now i = " << i << "\n"; // i becomes 6, then prints 6

    // Difference in expressions:
    int a = 3;
    int b = a++ + 2; // b = 3 + 2 = 5, then a becomes 4
    std::cout << "a (after a++ + 2): a = " << a << ", b = " << b << "\n";

    a = 3;
    b = ++a + 2;     // a becomes 4, then b = 4 + 2 = 6
    std::cout << "a (after ++a + 2): a = " << a << ", b = " << b << "\n";

    return 0;
}

