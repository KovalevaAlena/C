/******************************************************************************
Задача: Создайте программу, которая читает элементы массива 
из пользовательского ввода. Если пользователь вводит некорректный индекс, 
выбросьте и обработайте исключение, информируя пользователя об ошибке.
*******************************************************************************/
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int index;

    cout << "Введите индекс элемента массива (0-4): ";
    cin >> index;

    try {
        if (index < 0 || index >= SIZE) {
            throw out_of_range("Индекс вне диапазона.");
        }
        cout << "Элемент на позиции " << index << ": " << arr[index] << endl;
    }
    catch (const out_of_range& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    return 0;
}


