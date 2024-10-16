/* Реализовать класс для работы с комплексными числами
    Требуется реализовать класс Complex для работы с комплексными числами. Класс должен поддерживать следующие операции:
    
    Сложение двух комплексных чисел.
    Вычитание двух комплексных чисел.
    Умножение двух комплексных чисел.
    Вывод числа в формате (a + bi).
*/

#include <iostream>

//Описание класса
class Complex {
private:
    double real;
    double imag;

public:
    // Конструктор
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Операция сложения
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Операция вычитания
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Операция умножения
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Метод для вывода числа
    void print() const {
        std::cout << "(" << real << " + " << imag << "i)" << std::endl;
    }
};

int main() {
    Complex c1(2, 3), c2(1, 4);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;

    std::cout << "Сумма: ";
    sum.print();

    std::cout << "Разность: ";
    diff.print();

    std::cout << "Произведение: ";
    prod.print();

    return 0;
}
