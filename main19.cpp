/* Операции работы с динамической памятью
Задача: Напишите функцию для создания массива целых чисел, 
заполняющего его значениями, и затем освобождающую память.
*/

#include <iostream>
using namespace std;

void createAndDeleteArray() {
    int* arr = new int[5]; // Динамический массив

    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1; // Заполнение массива
    }

    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " "; // Вывод массива
    }
    cout << endl;

    delete[] arr; // Освобождение памяти
}

int main() {
    createAndDeleteArray(); // Вывод: 1 2 3 4 5
    return 0;
}

