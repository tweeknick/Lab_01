#include <iostream>
#include <cmath>

int main() {
    setlocale(0, ".1251");
    // Координати вершин трикутника
    double xA = 0, yA = 0;
    double xB, yB;
    double xC, yC;

    // Введення координат вершин B та C
    std::cout << "Введіть координати вершини B (xB yB): ";
    std::cin >> xB >> yB;

    std::cout << "Введіть координати вершини C (xC yC): ";
    std::cin >> xC >> yC;

    // Обчислення довжин сторін трикутника
    double sideAB = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    double sideBC = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
    double sideCA = sqrt(pow(xA - xC, 2) + pow(yA - yC, 2));

    // Обчислення бісектриси трикутника
    double bisectorA = (sideBC / (sideAB + sideBC)) * sideCA;
    double bisectorB = (sideCA / (sideBC + sideCA)) * sideAB;
    double bisectorC = (sideAB / (sideCA + sideAB)) * sideBC;

    // Обчислення радіусу описаного кола
    double s = (sideAB + sideBC + sideCA) / 2.0; // Півпериметр
    double radius = (sideAB * sideBC * sideCA) / (4.0 * sqrt(s * (s - sideAB) * (s - sideBC) * (s - sideCA)));

    // Виведення результатів
    std::cout << "Довжини сторін трикутника: AB = " << sideAB << ", BC = " << sideBC << ", CA = " << sideCA << std::endl;
    std::cout << "Бісектриси трикутника: w(A) = " << bisectorA << ", w(B) = " << bisectorB << ", w(C) = " << bisectorC << std::endl;
    std::cout << "Радіус описаного кола: R = " << radius << std::endl;

    return 0;
}