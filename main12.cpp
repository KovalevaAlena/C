/******************************************************************************

Задача: Реализуйте класс Complex, который 
поддерживает сложение и вычитание комплексных чисел, 
используя перегрузку операторов + и -.
*******************************************************************************/
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Перегрузка оператора сложения
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Перегрузка оператора вычитания
    Complex operator - (const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    void print() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex a(2.5, 3.0), b(1.2, 2.1);
    Complex sum = a + b;
    Complex diff = a - b;

    cout << "Sum: ";
    sum.print();
    
    cout << "Difference: ";
    diff.print();

    return 0;
}

