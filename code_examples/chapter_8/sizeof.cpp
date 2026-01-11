#include <iostream>

int main() {
    // sizeof operator
    // - sizeof gives the number of bytes of a type or expression
    // - result type is size_t (an unsigned integer)
    // - results depend on the machine and compiler

    std::cout << "sizeof examples:\n";

    std::cout << "sizeof(char) = " << sizeof(char) << "\n";
    std::cout << "sizeof(int) = " << sizeof(int) << "\n";
    std::cout << "sizeof(long) = " << sizeof(long) << "\n";
    std::cout << "sizeof(float) = " << sizeof(float) << "\n";
    std::cout << "sizeof(double) = " << sizeof(double) << "\n";

    int x = 0;
    int arr[10];
    int *p = arr;

    std::cout << "sizeof x (int variable) = " << sizeof x << "\n";
    std::cout << "sizeof arr (int[10]) = " << sizeof arr << "  (size of whole array)\n";
    std::cout << "sizeof arr / sizeof arr[0] = " << (sizeof arr / sizeof arr[0]) << "  (number of elements)\n";
    std::cout << "sizeof p (int*) = " << sizeof p << "  (size of pointer)\n";

    // sizeof on expressions
    std::cout << "sizeof (x + 3.5) = " << sizeof(x + 3.5) << "  (type of expression)\n";

    // Note: sizeof does not evaluate its operand when it is an expression
    std::cout << "Tip: use sizeof to get memory size but remember it depends on platform\n";

    return 0;
}

