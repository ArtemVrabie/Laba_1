/* Треугольник Фибоначчи с динамическим выделением памяти (C++)
Вот пример программы, который строит треугольник Фибоначчи с использованием динамического выделения памяти и указательной арифметики:*/

#include <iostream>

int main() {
    int rowCount;
    std::cout << "Enter the number of rows for the Fibonacci triangle: ";
    std::cin >> rowCount;

    int* fibArray = new int[rowCount * rowCount]; // Выделение памяти
    int* ptr = fibArray;

    int a = 0, b = 1, i, j;
    for (i = 0; i < rowCount; i++) {
        for (j = 0; j <= i; j++) {
            *ptr = a;
            int next = a + b;
            a = b;
            b = next;
            ptr++;
        }
    }

    ptr = fibArray;
    for (i = 0; i < rowCount; i++) {
        for (j = 0; j <= i; j++) {
            std::cout << *ptr << " ";
            ptr++;
        }
        std::cout << "\n";
    }

    delete[] fibArray; // Освобождение памяти

    return 0;
}
