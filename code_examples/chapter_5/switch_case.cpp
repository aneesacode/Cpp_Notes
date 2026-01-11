#include <iostream>

int main() {
    // Switch-case notes
    // - switch tests one integer-like value (int, char, enum)
    // - each case is a possible value
    // - use break to stop after a case
    // - fall-through: cases without break continue to next one
    // - default runs if no case matches

    int day = 6; // 1..7

    switch (day) {
        case 1:
            std::cout << "Monday\n";
            break;
        case 2:
            std::cout << "Tuesday\n";
            break;
        case 3:
            std::cout << "Wednesday\n";
            break;
        case 4:
            std::cout << "Thursday\n";
            break;
        case 5:
            std::cout << "Friday\n";
            break;
        case 6:
        case 7: // group weekend days using fall-through
            std::cout << "Weekend\n";
            break;
        default:
            std::cout << "Invalid day\n";
            break;
    }

    // Example: char switch
    char grade = 'B';
    switch (grade) {
        case 'A':
            std::cout << "Excellent\n";
            break;
        case 'B':
        case 'C':
            std::cout << "Good\n";
            break;
        case 'D':
            std::cout << "Pass\n";
            break;
        case 'F':
            std::cout << "Fail\n";
            break;
        default:
            std::cout << "Unknown grade\n";
            break;
    }

    return 0;
}

