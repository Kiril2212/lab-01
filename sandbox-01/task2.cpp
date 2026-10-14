#include <iostream>
#include <limits>

int main() {
    unsigned char x = 255;

    std::cout << "Before: " << static_cast<int>(x) << '\n';

    x = x + 1;

    std::cout << "After: " << static_cast<int>(x) << '\n';
    std::cout << "Maximum: "
              << static_cast<int>(std::numeric_limits<unsigned char>::max())
              << '\n';

    return 0;
}