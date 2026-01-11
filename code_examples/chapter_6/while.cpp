#include <iostream>

int main() {
    // While loop
    // - A while loop repeats while the condition is true.
    // - Check the condition first. If false at start, body does not run.

    std::cout << "while loop examples:\n";

    // Example 1: simple counter
    int i = 0;
    while (i < 5) {
        std::cout << "i = " << i << "\n";
        ++i;
    }

    // Example 2: loop with a break (stop early)
    int j = 0;
    while (j < 10) {
        if (j == 3) break; // exit loop when j is 3
        std::cout << "j = " << j << "\n";
        ++j;
    }

    // Quick tip:
    // Make sure the condition will become false at some point,
    // otherwise you get an infinite loop.

    return 0;
}

