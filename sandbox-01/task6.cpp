#include <iostream>

int main() {
    int numbers[3] = {10, 20, 30};

    std::cout << "First: " << numbers[0] << '\n';
    std::cout << "Third: " << numbers[2] << '\n';

    // Намірено неправильний доступ для демонстрації санітайзера:
    std::cout << "Out of bounds: " << numbers[3] << '\n';

    return 0;
}
