#include <iostream>

int main() {
    // Assignment operators
    // =   assign a value to a variable
    // +=  add then assign (x += y  is  x = x + y)
    // -=  subtract then assign
    // *=  multiply then assign
    // /=  divide then assign
    // %=  remainder then assign (only for integers)

    int x = 10;           // = assignment
    std::cout << "x = " << x << "\n";

    x += 5;               // x = x + 5
    std::cout << "after x += 5 -> " << x << "\n";

    x -= 3;               // x = x - 3
    std::cout << "after x -= 3 -> " << x << "\n";

    x *= 2;               // x = x * 2
    std::cout << "after x *= 2 -> " << x << "\n";

    x /= 4;               // x = x / 4 (integer division)
    std::cout << "after x /= 4 -> " << x << "\n";

    int y = 7;
    y %= 3;               // y = y % 3  (remainder)
    std::cout << "after y %= 3 (7%3) -> " << y << "\n";

    // Quick tip:
    // Compound forms (+=, -=, ...) are shorter and clear when updating a variable.
    return 0;
}

