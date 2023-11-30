#include <istream>
#include <cmath>
#include <iostream>

int main() {
    setlocale(0, ".1251");
    // Задані значення параметрів
    const double x_constant = 4;
    double a;

    // Введення значення a з клавіатури
    std::cout << "Введіть значення a: ";
    std::cin >> a;

    // Обчислення значень p та t
    double p = pow(x_constant, 2) - sqrt(fabs(x_constant));
    double t = cbrt(x_constant) + pow(a, 2);

    // Обчислення значення y за формулою
    double y = pow(p, 2) + pow(t, 4);

    // Виведення результату
    std::cout << "Значення функції F(x): " << y << std::endl;

    return 0;
}