/*«Подставляемые» функции
Задача: Создайте шаблонную функцию для обмена значениями двух переменных.*/

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapValues(x, y);
    cout << "x = " << x << ", y = " << y << endl; // x = 20, y = 10

    double a = 1.5, b = 3.5;
    swapValues(a, b);
    cout << "a = " << a << ", b = " << b << endl; // a = 3.5, b = 1.5

    return 0;
}

