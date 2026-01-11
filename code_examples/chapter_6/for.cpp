#include <iostream>
#include <vector>

int main() {
    // For loop
    // - A for loop has init; condition; update.
    // - Good when you know how many times to run the loop.

    std::cout << "for loop examples:\n";

    // Example 1: classic for loop (counter)
    for (int i = 0; i < 5; ++i) {
        std::cout << "i = " << i << "\n";
    }

    // Example 2: range-based for (C++11)
    int v[] = {10, 20, 30};
    std::cout << "range-based for over a vector:\n";
    for (int val : v) {
        std::cout << val << "\n";
    }

    // Example 3: modify with reference
    for (int &val : v) {
        val += 1; // change the vector elements
    }
    std::cout << "after adding 1 to each element:\n";
    for (int val : v) std::cout << val << " ";
    std::cout << "\n";

    return 0;
}

