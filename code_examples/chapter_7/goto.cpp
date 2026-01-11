#include <iostream>

int main() {
    // Goto and labels
    // - "goto" jumps to a label in the same function.
    // - Usually avoid goto. It can make code hard to read.
    // - Small use case: jump out of nested code in a simple program.
    // - If you know a little bit of asm, then goto is nothing but simple jmp statement

    std::cout << "goto example:\n";

    int x = 0;
    if (x == 0) {
        std::cout << "Before goto\n";
        goto skip; // jump to label "skip"
        // ... code here would be skipped ...
    }

    std::cout << "This line is skipped by goto\n";

skip:
    std::cout << "After label skip\n";

    // Safe alternative: prefer loops, functions, or flags instead of goto.
    std::cout << "Tip: prefer structured control flow over goto\n";

    return 0;
}

