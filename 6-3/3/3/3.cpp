#include <iostream>
#include <cmath>

int main() {
    setlocale(0, ".1251");
    // Введення значення кута alpha в градусах
    double alpha;
    std::cout << "Введіть значення кута alpha в градусах: ";
    std::cin >> alpha;

    // Переведення градусів в радіани
    double alphaRad = alpha * 3.14 / 180.0;

    // Обчислення значення за першою формулою
    double z1 = cos(alphaRad) + pow(cos(alphaRad), 2) + pow(cos(alphaRad), 6) + pow(cos(alphaRad), 7);

    // Обчислення значення за другою формулою
    double z2 = 4 * cos(alphaRad / 2) / (2 * cos(5 * alphaRad / 2) * cos(4 * alphaRad));

    // Виведення результатів
    std::cout << "За першою формулою (z1): " << z1 << std::endl;
    std::cout << "За другою формулою (z2): " << z2 << std::endl;

    return 0;
}