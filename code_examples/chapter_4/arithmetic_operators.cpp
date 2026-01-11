#include <iostream>

int main() {
    // Arithmetic operators notes (simple B1 English)
    // +  addition
    // -  subtraction
    // *  multiplication
    // /  division
    // %  remainder (modulo) for integers

    std::cout << "Arithmetic operators examples:\n";

    int a = 5 + 2;   // addition
    int b = 5 - 2;   // subtraction
    int c = 4 * 3;   // multiplication

    std::cout << "5 + 2 = " << a << "\n";
    std::cout << "5 - 2 = " << b << "\n";
    std::cout << "4 * 3 = " << c << "\n";

    // Integer division vs floating-point division
    int idiv = 7 / 2;          // integer division -> 3
    double fdiv = 7.0 / 2.0;   // floating point -> 3.5

    std::cout << "7 / 2 (int) = " << idiv << "\n";
    std::cout << "7.0 / 2.0 (double) = " << fdiv << "\n";

    // Modulo: remainder of integer division
    int rem = 7 % 2; // 1
    std::cout << "7 % 2 = " << rem << "\n";

    // Operator precedence: * and / have higher priority than + and -
    int p1 = 2 + 3 * 4;        // 2 + (3*4) = 14
    int p2 = (2 + 3) * 4;      // (2+3) * 4 = 20

    std::cout << "2 + 3 * 4 = " << p1 << " (multiplication first)\n";
    std::cout << "(2 + 3) * 4 = " << p2 << " (parentheses change order)\n";

    // Small summary
    std::cout << "\nSummary:\n";
    std::cout << "- Use + - * / % for math with numbers\n";
    std::cout << "- Integer division drops the fraction (use double for decimal)\n";
    std::cout << "- Use parentheses to change operation order\n";
    return 0;
}
