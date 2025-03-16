#include <iostream>
#include <set>

int main() {
    setlocale(LC_ALL, "Russian");
    // Создаем два множества A и B
    std::set<int> A, B;
    int elem;

    // Ввод элементов множества A
    std::cout << "Введите элементы множества A (введите -1 для завершения ввода):" << std::endl;
    while (true) {
        std::cin >> elem;
        if (elem == -1) {
            break;
        }
        A.insert(elem);
    }

    // Ввод элементов множества B
    std::cout << "Введите элементы множества B (введите -1 для завершения ввода):" << std::endl;
    while (true) {
        std::cin >> elem;
        if (elem == -1) {
            break;
        }
        B.insert(elem);
    }

    // Подсчитываем количество элементов в каждом множестве
    int sizeA = A.size();
    int sizeB = B.size();

    // Выводим количество элементов в каждом множестве
    std::cout << "Количество элементов в множестве A: " << sizeA << std::endl;
    std::cout << "Количество элементов в множестве B: " << sizeB << std::endl;

    // Выводим множество с меньшим количеством элементов
    if (sizeA < sizeB) {
        std::cout << "Множество A имеет меньше элементов:" << std::endl;
        for (int elem : A) {
            std::cout << elem << " ";
        }
    }
    else {
        std::cout << "Множество B имеет меньше элементов:" << std::endl;
        for (int elem : B) {
            std::cout << elem << " ";
        }
    }

    return 0;
}

