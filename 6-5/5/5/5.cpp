#include <iostream>
#include <cmath>

int main() {
    setlocale(0, ".1251");
    // Введення значень змінних
    double x, y, a;

    std::cout << "Введіть значення x: ";
    std::cin >> x;

    std::cout << "Введіть значення y: ";
    std::cin >> y;

    std::cout << "Введіть значення a: ";
    std::cin >> a;

    // Перевірка області визначення
    if (x == 0 || x == a || x == exp(x)) {
        std::cout << "Вираз не визначений для заданих значень x та a." << std::endl;
    }
    else {
        // Обчислення виразу
        double result = (pow(y, 2) - x) / (pow(x, 2) - y + 1 - pow(a, 2) - x + 2) / (pow(x, 2) - exp(x) - 2);

        // Виведення результату
        std::cout << "Значення виразу: " << result << std::endl;
    }

    return 0;
}