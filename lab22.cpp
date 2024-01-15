/* ����������� ��������� � ������������ ���������� ������ (C++)
��� ������ ���������, ������� ������ ����������� ��������� � �������������� ������������� ��������� ������ � ������������ ����������:*/

#include <iostream>

int main() {
    int rowCount;
    std::cout << "Enter the number of rows for the Fibonacci triangle: ";
    std::cin >> rowCount;

    int* fibArray = new int[rowCount * rowCount]; // ��������� ������
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

    delete[] fibArray; // ������������ ������

    return 0;
}
