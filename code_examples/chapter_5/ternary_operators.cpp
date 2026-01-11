#include <iostream>
#include <string>

int main() {
    // Ternary operator notes
    // - syntax: condition ? value_if_true : value_if_false
    // - it returns one of two values based on condition
    // - good for short choices; avoid complex nested ternary for clarity

    int a = 5, b = 8;
    // choose larger value
    int max = (a > b) ? a : b;
    std::cout << "max of " << a << " and " << b << " is " << max << "\n";

    // use in a string
    std::string result = (a % 2 == 0) ? "a is even" : "a is odd";
    std::cout << result << "\n";

    // use directly in output
    std::cout << "b is " << ((b > 0) ? "positive" : "not positive") << "\n";

    // small warning: nested ternary is allowed but can be hard to read:
    int x = -1;
    std::string sign = (x > 0) ? "positive" : (x == 0 ? "zero" : "negative");
    std::cout << "x is " << sign << "\n";

    return 0;
}

