/*Сравнение библиотек <cstring> и <string>

1) strlen:
-С(cstring) : Функция strlen используется для определения длины C - style строки.
- C++ (string) : Метод size() класса std::string возвращает длину строки.

2) strcpy:
-С(cstring) : Функция strcpy копирует содержимое одной C - style строки в другую.
- C++ (string) : Метод assign() класса std::string может быть использован для копирования строк.

3) strcmp:
-С(cstring) : Функция strcmp сравнивает две C - style строки.
- C++ (string) : Метод compare() класса std::string может быть использован для сравнения строк.

4) strcat:
-С(cstring) : Функция strcat используется для конкатенации(объединения) строк.
- C++ (string) : Конкатенация строк в C++ может быть выполнена с использованием оператора + или метода append() класса std::string.

5) someString[index]:
-С(cstring) : Для доступа к символам в C - style строке используются квадратные скобки, например someString[index].
- C++ (string) : В C++ для доступа к символам в строке можно использовать оператор квадратные скобки[], а также метод at().

6) push_back:
-C++ (string) : Метод push_back класса std::string используется для добавления символа в конец строки.

7) pop_back:
-C++ (string) : Метод pop_back класса std::string используется для удаления последнего символа из строки.

Главная разница между C - style строками(работа с указателями) и std::string в C++ заключается в том, 
что std::string представляет собой класс, который обеспечивает более безопасное и удобное управление строками.
std::string содержит множество методов для манипуляции строками на языке C++, что упрощает работу с ними и исключает многие 
типичные ошибки, связанные с работой с C - style строками, такие как переполнение буфера, утечки памяти и т.д.*/

// Программа на C++ для сортировки букв в алфавитном порядке и удаления символов из строки :

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Удаление пробелов и пунктуационных знаков
    inputString.erase(std::remove_if(inputString.begin(), inputString.end(),
        [](unsigned char c) { return std::ispunct(c) || std::isspace(c); }), inputString.end());

    // Сортировка букв в алфавитном порядке
    std::sort(inputString.begin(), inputString.end());

    // Вывод отсортированной строки
    std::cout << "Sorted string: " << inputString << std::endl;

    return 0;
}


/*Освобождение динамической памяти и указательная арифметика(C++)
1) int* ptr = (int*)malloc(sizeof(int)) :
    -C - style(C) : Выделяется память под один элемент типа int.
    - C++ : В C++ используется оператор new, например int* ptr = new int; .

    2) int* ptrArr = (int*)malloc(sizeof(int) * N) :
    -C - style(C) : Выделяется память под массив элементов типа int.
    - C++ : В C++ используется оператор new[], например int* ptrArr = new int[N]; .

    3) free(ptr) :
    -C - style(C) : Используется для освобождения памяти, выделенной с помощью malloc.
    - C++ : Не используется в C++, так как оператор new используется для выделения памяти, 
    и для освобождения памяти используется оператор delete.

    4) free(ptrArr) :
    -C - style(C) : Используется для освобождения памяти, выделенной с помощью malloc для массива.
    - C++ : В C++ используется оператор delete[] для освобождения памяти, выделенной с помощью new[].

    В C++ очень важно освобождать выделенную динамическую память, чтобы избежать утечек памяти.
    Попытка освободить одну и ту же выделенную память дважды может привести к непредсказуемому поведению программы и краху.
    Освободить невыделенную память тоже нельзя.Это может повредить память и вызвать серьезные проблемы в работе программы. */
