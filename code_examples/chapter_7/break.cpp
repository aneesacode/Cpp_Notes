#include <iostream>

int main() {
    // break
    // - "break" exits the nearest loop or switch immediately.
    // - Use break to stop early when a condition is met.

    std::cout << "break example (stop loop at 3):\n";
    for (int i = 0; i < 10; ++i) {
        if (i == 3) {
            std::cout << "Found 3, breaking\n";
            break; // exit the for loop
        }
        std::cout << i << " ";
    }
    std::cout << "\n";

    std::cout << "break in switch example:\n";
    int code = 2;
    switch (code) {
        case 1:
            std::cout << "One\n";
            break;
        case 2:
            std::cout << "Two\n";
            break; // stops here, does not fall through
        default:
            std::cout << "Other\n";
            break;
    }

    return 0;
}

