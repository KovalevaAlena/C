/*  Реализация полярного представления комплексного числа
Добавьте в структуру Complex метод для вычисления аргумента комплексного числа (угол в полярной системе координат).
Используйте функцию atan2.
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
        return atan2(im, re); // Возвращает угол в радианах
    }

    // Методы для получения значений
    double getRe() {
        return re;
    }

    double getIm() {
        return im;
    }

    // Метод для вывода комплексного числа
    void print() {
        std::cout << "Комплексное число: " << re << " + " << im << "i" << std::endl;
    }
};

int main() {
    // Создаем объект класса Complex
    Complex z(1.0, 1.0);

    // Выводим комплексное число
    z.print();

    // Вычисляем и выводим модуль и аргумент числа
    std::cout << "Модуль: " << z.mod() << std::endl;
    std::cout << "Аргумент: " << z.argument() << std::endl;

    return 0;
}
