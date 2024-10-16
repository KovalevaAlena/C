/******************************************************************************
Задача: Реализуйте функцию divide, которая принимает два числа 
и возвращает результат деления. Если делитель равен нулю, 
функция должна выбросить исключение типа invalid_argument.
*******************************************************************************/
#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Делитель не может быть равен нулю.");
    }
    return a / b;
}

int main() {
    double x, y;
    cout << "Введите делимое: ";
    cin >> x;
    cout << "Введите делитель: ";
    cin >> y;

    try {
        double result = divide(x, y);
        cout << "Результат деления: " << result << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    return 0;
}

