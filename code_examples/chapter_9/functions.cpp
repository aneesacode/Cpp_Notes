#include <iostream>
#include <string>


int add(int a, int b) {
    return a + b;
}

void greet(const std::string &name) {
    std::cout << "Hello, " << name << "!\n";
}

int multiply(int a, int b = 2) {
    return a * b;
}

int main() {
    // Functions
    // - A function groups code to do a job.
    // - It can take parameters and return a value.
    // - Here we use C++11 lambdas inside main() for simple examples.

    // 1) simple function that adds two numbers and returns result
    std::cout << "add(3,4) = " << add(3, 4) << "\n";

    // 2) void function (no return)
    greet("Alice");

    // 3) function with default-like behavior (simulate with optional argument)
    std::cout << "multiply(5) = " << multiply(5) << "  (uses default b=2)\n";
    std::cout << "multiply(5,3) = " << multiply(5,3) << "\n";

    // 4) show that functions can be used with variables
    int x = 7;
    std::cout << "add(x,1) = " << add(x,1) << "\n";

    // Short tips:
    std::cout << "Tip: in real code, you can define normal functions outside main for reuse\n";

    return 0;
}
