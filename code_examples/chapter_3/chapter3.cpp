#include <iostream>
#include <string>

int main() {
    // 1) const keyword
    // Simple note:
    // - "const" means the value cannot be changed after it is set.
    // - Use it to protect important values.
    //
    // Examples:
    const int maxUsers = 5;            // integer that cannot change
    const std::string name = "Alice";  // string that cannot change

    std::cout << "const examples:\n";
    std::cout << "maxUsers = " << maxUsers << "\n";
    std::cout << "name = " << name << "\n";

    // The following line would be a compile error (do not uncomment):
    // maxUsers = 6; // error: cannot assign to a const variable

    // You can use const with references to avoid copying:
    const int &refMax = maxUsers;
    std::cout << "refMax (const reference) = " << refMax << "\n\n";

    // 2) auto keyword (C++11)
    // Simple note:
    // - "auto" lets the compiler find the variable type from the initializer.
    // - It makes code shorter and clearer when the type is obvious.
    //
    // Examples:
    auto a = 10;                 // int
    auto b = 3.14;               // double
    auto s = std::string("hi");  // std::string

    std::cout << "auto examples:\n";
    std::cout << "a (auto) = " << a << "  (int)\n";
    std::cout << "b (auto) = " << b << "  (double)\n";
    std::cout << "s (auto) = " << s << "  (std::string)\n";

    // auto with reference:
    auto &aRef = a;
    aRef = 20; // changes original a
    std::cout << "after aRef = 20, a = " << a << "\n";

    // const auto:
    const auto c = 50;
    std::cout << "const auto c = " << c << "\n";
    // c = 60; // compile error: cannot modify const auto

    std::cout << "\n";

    // 3) endl vs '\n'
    // Simple note:
    // - '\n' adds a new line character. It is fast.
    // - std::endl adds a new line AND flushes the output buffer.
    // - Use std::endl when you need to flush (e.g., before a crash or when waiting for output).
    //
    // Examples:
    std::cout << "Using '\\n' (no flush) line 1\n";
    std::cout << "Using '\\n' (no flush) line 2\n";

    std::cout << "Using std::endl (flush) line 3" << std::endl;
    std::cout << "Using std::endl (flush) line 4" << std::endl;

    // Quick summary printed:
    std::cout << "\nSummary:\n";
    std::cout << "- const: protects values from change\n";
    std::cout << "- auto: compiler finds the type for you\n";
    std::cout << "- '\\n': newline; std::endl: newline + flush\n";

    return 0;
}
