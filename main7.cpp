/*  Анонимные объекты
Используйте анонимный объект для вычисления модуля 
и аргумента комплексного числа без создания именованной переменной.
*/
#include <iostream>
#include <cmath>

struct Complex {
private:
    double re, im;

public:
    // Конструктор
    Complex(double real, double imaginary) : re(real), im(imaginary) {}

    // Метод для вычисления модуля
    double mod() {
        return sqrt(re * re + im * im);
    }

    // Метод для вычисления аргумента
    double argument() {
        return atan2(im, re);
    }
};

int main() {
    // Вычисляем модуль и аргумент анонимного объекта
    double mod = Complex(1.0, 1.0).mod();
    double arg = Complex(1.0, 1.0).argument();

    // Выводим результаты
    std::cout << "Модуль анонимного объекта: " << mod << std::endl;
    std::cout << "Аргумент анонимного объекта (в радианах) : " << arg << std::endl;

    return 0;
}
