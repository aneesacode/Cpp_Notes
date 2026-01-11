#include <iostream>


void modifyByRef(int &r) {
    r += 5;
    std::cout << "inside modifyByRef, r = " << r << "\n";
}

int main() {
    // Call by reference
    // - A reference to the original variable is passed.
    // - Changes inside the function change the original variable.

    int original = 10;

    std::cout << "original before = " << original << "\n";
    modifyByRef(original); // passes reference
    std::cout << "original after  = " << original << "  (changed)\n";

    // You can also use const reference to avoid copying but prevent modification:
    const int &cref = original;
    std::cout << "const reference cref = " << cref << " (cannot modify through cref)\n";

    return 0;
}
