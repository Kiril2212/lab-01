#include <iostream>
#include <limits>

int main() {
    std::cout << "Minimum int: " << std::numeric_limits<int>::min() << '\n';
    std::cout << "Maximum int: " << std::numeric_limits<int>::max() << '\n';
    int x = std::numeric_limits<int>::max();
    std::cout << "x = " << x << '\n';
    return 0;
}
