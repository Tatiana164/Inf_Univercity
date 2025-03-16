#include <iostream>

// Функция для подсчета количества четных элементов в массиве
void countEvenElements(const int* arr, int size, int& count) {
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
}

// Функция для нахождения массива с наибольшим количеством четных элементов
void findArrayWithMaxEvenElements(const int* arrA, const int* arrB, int size) {
    int countA = 0, countB = 0;

    // Подсчитываем количество четных элементов в массивах
    countEvenElements(arrA, size, countA);
    countEvenElements(arrB, size, countB);

    // Сравниваем количество четных элементов и выводим массив с наибольшим количеством
    if (countA > countB) {
        std::cout << "Массив A имеет наибольшее количество четных элементов: " << countA << std::endl;
        std::cout << "Элементы массива A: ";
        for (int i = 0; i < size; i++) {
            std::cout << arrA[i] << " ";
        }
    }
    else {
        std::cout << "Массив B имеет наибольшее количество четных элементов: " << countB << std::endl;
        std::cout << "Элементы массива B: ";
        for (int i = 0; i < size; i++) {
            std::cout << arrB[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int N; // Размер массивов

    // Ввод размера массивов
    std::cout << "Введите размер массивов (N): ";
    std::cin >> N;

    int* A = new int[N]; // Динамическое выделение памяти для массива A
    int* B = new int[N]; // Динамическое выделение памяти для массива B

    // Ввод массивов
    std::cout << "Введите " << N << " элементов для массива A:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::cout << "Введите " << N << " элементов для массива B:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> B[i];
    }

    // Поиск массива с наибольшим количеством четных элементов
    findArrayWithMaxEvenElements(A, B, N);
    return 0;
}


