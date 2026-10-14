#include <iostream>

int main() {
    char letter = 'A';
    char digit = '7';

    std::cout << "Letter: " << letter << '\n';
    std::cout << "Letter code: "
              << static_cast<int>(letter) << '\n';

    std::cout << "Digit: " << digit << '\n';
    std::cout << "Digit code: "
              << static_cast<int>(digit) << '\n';

    return 0;
}
