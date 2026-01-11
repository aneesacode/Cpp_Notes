#include <iostream>

int main() {
    // continue
    // - "continue" skips the rest of the current loop iteration.
    // - The loop then moves to the next iteration.

    std::cout << "continue example (print odd numbers 0..9):\n";
    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) continue; // skip even numbers
        std::cout << i << " ";
    }
    std::cout << "\n";

    std::cout << "while loop with continue (stop printing at 5):\n";
    int j = 0;
    while (j < 8) {
        ++j;
        if (j == 6) continue; // skip printing 6
        std::cout << j << " ";
    }
    std::cout << "\n";

    return 0;
}

