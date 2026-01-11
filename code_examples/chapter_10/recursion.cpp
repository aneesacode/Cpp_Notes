#include <iostream>


/**
 * Compute factorial of n recursively.
 *
 * Computes n! = n * (n - 1)! with the base case fact(n) = 1 for n <= 1.
 * Negative inputs are treated as the base case and return 1.
 *
 * param n Non\-negative integer whose factorial is computed.
 * return Factorial of n as a long. Note: values overflow for moderately large n.
 * note Recursive implementation — deep recursion may cause stack overflow.
 */
long fact(long n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}


/**
 * Compute the sum of integers from 1 to n recursively.
 *
 * Computes 1 + 2 + ... + n with the base case sumN(n) = 0 for n <= 0.
 * If n is non\-positive, the function returns 0.
 *
 * param n Upper bound of the summation.
 * return Sum of integers from 1 to n.
 * note Recursive implementation — deep recursion may cause stack overflow.
 */
int sumN(int n) {
    if (n <= 0) return 0;
    return n + sumN(n - 1);
}

int main() {
    // Recursion
    // - A function calls itself. Must have a base case to stop.
    // - Good for problems that repeat in smaller steps (factorial, sum).

    std::cout << "factorial(5) = " << fact(5) << "\n"; // 120
    std::cout << "sum of 1..5 = " << sumN(5) << "\n"; // 15

    // Small warning
    std::cout << "Tip: always include a base case to avoid infinite recursion\n";

    return 0;
}
