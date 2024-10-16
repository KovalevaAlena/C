/*Переопределение операции индексирования
Задача: Реализуйте класс Array с переопределенной 
операцией индексирования для доступа к элементам массива.*/

#include <iostream>
using namespace std;

class Array {
public:
    Array(int size) : size(size) {
        data = new int[size];
    }

    int& operator[](int index) {
        return data[index]; // Переопределение операции индексирования
    }

    ~Array() {
        delete[] data;
    }

private:
    int *data;
    int size;
};

int main() {
    Array arr(5);
    arr[0] = 10;
    arr[1] = 20;
    cout << arr[0] << " " << arr[1] << endl; // Вывод: 10 20
    return 0;
}
