#include <iostream>

int main() {
    // Relational operators
    // ==  equal
    // !=  not equal
    // >   greater than
    // <   less than
    // >=  greater or equal
    // <=  less or equal

    int a = 5;
    int b = 7;

    std::cout << "5 == 7 -> " << (a == b) << "\n";
    std::cout << "5 != 7 -> " << (a != b) << "\n";
    std::cout << "5 < 7  -> " << (a < b) << "\n";
    std::cout << "5 > 7  -> " << (a > b) << "\n";
    std::cout << "5 <= 7 -> " << (a <= b) << "\n";
    std::cout << "5 >= 7 -> " << (a >= b) << "\n";

    // Comparisons return true (1) or false (0). Use them in if statements:
    if (a < b) {
        std::cout << "a is less than b\n";
    }

    return 0;
}

