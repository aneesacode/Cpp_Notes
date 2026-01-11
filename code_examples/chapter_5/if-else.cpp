#include <iostream>

int main() {
    // If-else notes
    // - if: run code when condition is true
    // - else if: check another condition if first is false
    // - else: run when all above are false
    // - nested if: an if inside another if

    // Example 1: if / else if / else
    int n = -3;
    if (n > 0) {
        std::cout << n << " is positive\n";
    } else if (n == 0) {
        std::cout << n << " is zero\n";
    } else {
        std::cout << n << " is negative\n";
    }

    // Example 2: nested if-else
    int age = 20;
    bool hasID = true;

    if (age >= 18) {
        // inside this block we can check more rules
        if (hasID) {
            std::cout << "You can enter (age >= 18 and has ID)\n";
        } else {
            std::cout << "You cannot enter: missing ID\n";
        }
    } else {
        std::cout << "You cannot enter: age less than 18\n";
    }

    return 0;
}

