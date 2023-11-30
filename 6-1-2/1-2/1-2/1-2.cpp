#include <iostream>

int main() {
    setlocale(0, ".1251");
    // Вартість 1 метра тканини
    double costPerMeter;

    // Розміри відрізу тканини
    double length, width;

    // Введення вартості 1 метра тканини
    std::cout << "Введіть вартість 1 метра тканини: ";
    std::cin >> costPerMeter;

    // Введення розмірів відрізу тканини
    std::cout << "Введіть довжину відрізу тканини (в метрах): ";
    std::cin >> length;

    std::cout << "Введіть ширину відрізу тканини (в метрах): ";
    std::cin >> width;

    // Обчислення площі відрізу тканини
    double area = length * width;

    // Обчислення вартості тканини
    double totalCost = costPerMeter * area;

    // Виведення результату
    std::cout << "Вартість тканини для відрізу " << length << " метрів на " << width << " метрів: " << totalCost << std::endl;

    return 0;
}