#include <iostream>
#include <cmath> // Для использования математических функций: sin, cos, exp, log

int main() {
    setlocale(LC_ALL, "Russian");
    float x, y;

    // Ввод значений x и y
    std::cout << "Введите значение x: ";
    std::cin >> x;
    std::cout << "Введите значение y: ";
    std::cin >> y;

    // Расчет R по формуле: R = 2 * sin((x + y) / 2) * cos((x - y) / 2)
    float R = 2 * sin((x + y) / 2) * cos((x - y) / 2);

    // Расчет S по формуле: S = e^2 * ln(x)
    float S = exp(2) * log(x);

    // Вывод значений R и S
    std::cout << "R = " << R << std::endl;
    std::cout << "S = " << S << std::endl;

    // Нахождение максимального значения между R и S
    float C = std::max(R, S);

    // Вывод максимального значения
    std::cout << "Максимальное значение (C) = " << C << std::endl;

    return 0;
}
