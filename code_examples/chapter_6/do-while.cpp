#include <iostream>

int main() {
    // Do-while loop
    // - A do-while runs the body first, then checks the condition.
    // - The body runs at least once, even if the condition is false.
    // - do-while loop is also post-test loop.

    std::cout << "do-while loop examples:\n";

    // Example 1: run once even if condition false
    int a = 10;
    do {
        std::cout << "This runs once, a = " << a << "\n";
        --a;
    } while (a > 10); // condition false, but body ran once

    // Example 2: simple counter with do-while
    int k = 0;
    do {
        std::cout << "k = " << k << "\n";
        ++k;
    } while (k < 3);

    return 0;
}

