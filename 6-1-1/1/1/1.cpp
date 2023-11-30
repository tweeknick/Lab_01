#include <iostream>

int main() {
    setlocale(0, ".1251");
    // Вартість перекладу однієї сторінки тексту
    double costPerPage;

    // Кількість сторінок для перекладу
    int pageCount;

    // Введення вартості перекладу однієї сторінки
    std::cout << "Введіть вартість перекладу однієї сторінки: ";
    std::cin >> costPerPage;

    // Введення кількості сторінок для перекладу
    std::cout << "Введіть кількість сторінок для перекладу: ";
    std::cin >> pageCount;

    // Обчислення загальної заробітної плати
    double totalPayment = costPerPage * pageCount;

    // Виведення результату
    std::cout << "Загальна заробітна плата перекладача: " << totalPayment << std::endl;

    return 0;
}