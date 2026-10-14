
#include <iostream>
#include <iomanip>

int main() {
    double a = 0.1;
    double b = 0.2;
    double c = a + b;

    std::cout << std::setprecision(17);
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "a + b = " << c << '\n';
    std::cout << "Is sum equal to 0.3? " << (c == 0.3) << '\n';

    return 0;
}
