/*  Использование конструктора и деструктора для выделения и освобождения динамической памяти
Условие задачи: Создать класс DynamicArray, который управляет динамическим массивом. 
В конструкторе выделяется память для массива, а в деструкторе — освобождается. 
Реализуйте методы для добавления элементов и вывода массива.
*/

#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    size_t size;

public:
    // Конструктор для создания массива заданного размера
    DynamicArray(size_t s) : size(s) {
        arr = new int[size];  // Выделяем память для массива
        cout << "Массив размера " << size << " создан." << endl;
    }

    // Метод для добавления элемента в массив
    void setElement(size_t index, int value) {
        if (index < size) {
            arr[index] = value;
        }
    }

    // Метод для вывода элементов массива
    void display() {
        for (size_t i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Деструктор для освобождения памяти
    ~DynamicArray() {
        delete[] arr;  // Освобождаем память
        cout << "Память освобождена." << endl;
    }
};

int main() {
    DynamicArray da(5);  // Создаем объект массива на 5 элементов
    da.setElement(0, 10);
    da.setElement(1, 20);
    da.setElement(2, 30);
    da.setElement(3, 40);
    da.setElement(4, 50);
    da.display();  // Выводим элементы массива
    // Память автоматически освободится при выходе из области видимости объекта `da`
    return 0;
}
