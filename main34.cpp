/*Переопределение операции преобразования типа
Задача: Реализуйте класс Temperature, 
который может быть преобразован в значение типа double, 
представляющее температуру в Цельсиях.*/

#include <iostream>
using namespace std;

class Temperature {
public:
    Temperature(double fahrenheit) : fahrenheit(fahrenheit) {}

    // Переопределение операции преобразования типа
    operator double() const {
        return (fahrenheit - 32) * 5.0 / 9.0; // Преобразование в Цельсии
    }

private:
    double fahrenheit;
};

int main() {
    Temperature temp(98.6);
    double celsius = temp; // Неявное преобразование в double
    cout << "Temperature in Celsius: " << celsius << endl; // Вывод: 37
    return 0;
}

