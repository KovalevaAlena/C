/*Перегрузка операций простыми функциями
Задача: Перегрузите операцию + для класса Complex,
который представляет собой комплексные числа.*/

#include <iostream>
using namespace std;

class Complex {
public:
    Complex(int real, int imag) : real(real), imag(imag) {}

    Complex operator+(const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

private:
    int real, imag;
};

int main() {
    Complex num1(3, 4), num2(1, 2);
    Complex result = num1 + num2; // Перегруженная операция сложения
    result.display(); // Вывод: 4 + 6i
    return 0;
}


