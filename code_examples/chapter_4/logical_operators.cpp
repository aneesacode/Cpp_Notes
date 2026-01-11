#include <iostream>

int main() {
    // Logical operators
    // &&  logical AND (true if both sides true)
    // ||  logical OR  (true if one side is true)
    // !   logical NOT (invert a boolean)

    bool t = true;
    bool f = false;

    std::cout << "true && false -> " << (t && f) << "\n";
    std::cout << "true || false -> " << (t || f) << "\n";
    std::cout << "!true -> " << (!t) << "\n";

    // Short-circuit example:
    int x = 0;
    // In (false && ++x), ++x is not run because left side is false.
    if (false && ++x) {
        // ...
    }
    std::cout << "after false && ++x, x = " << x << " (++x not run)\n";

    // In (true || ++x), ++x is not run because left side is true.
    x = 0;
    if (true || ++x) {
        // ...
    }
    std::cout << "after true || ++x, x = " << x << " (++x not run)\n";

    // Use parentheses to make complex logic clear.
    return 0;
}

