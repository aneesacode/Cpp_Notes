#include <iostream>


void modifyByValue(int v) {
    v += 5;
    std::cout << "inside modifyByValue, v = " << v << "\n";
}

int main() {
    // Call by value
    // - A copy of the value is passed to the function.
    // - Changes inside the function do not change the original variable.

    int original = 10;

    std::cout << "original before = " << original << "\n";
    modifyByValue(original); // passes a copy
    std::cout << "original after  = " << original << "  (unchanged)\n";

    return 0;
}
