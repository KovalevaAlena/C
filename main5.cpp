/*  Реализация механизма защиты и инициализации объекта
Расширьте предыдущую структуру так, чтобы поля re и im были защищены от внешнего доступа, а для задания значений был доступен только конструктор. 
Добавьте также метод для получения действительной и 
мнимой частей комплексного числа.
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
    Complex z(3.0, 4.0);

    // Выводим комплексное число и его части
    z.print();
    std::cout << "Действительная часть: " << z.getRe() << std::endl;
    std::cout << "Мнимая часть: " << z.getIm() << std::endl;

    // Вычисляем и выводим модуль числа
    std::cout << "Модуль: " << z.mod() << std::endl;

    return 0;
}

