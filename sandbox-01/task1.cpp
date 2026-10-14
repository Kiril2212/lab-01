#include <iostream>
#include <limits>

int main() {
    int x = 10;

    std::cout << "x = " << x << '\n';
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << "Minimum int: " << std::numeric_limits<int>::min() << '\n';
    std::cout << "Maximum int: " << std::numeric_limits<int>::max() << '\n';

    return 0;
}
