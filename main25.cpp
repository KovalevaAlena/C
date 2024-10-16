/*Инициализация членов класса в конструкторе
Задача: Реализуйте класс Rectangle, который имеет два члена (длину и ширину), 
и инициализирует их через конструктор.*/

#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle(double width, double height)
        : width(width), height(height) {}

    void displayArea() {
        cout << "Area: " << width * height << endl;
    }

private:
    double width;
    double height;
};

int main() {
    Rectangle rect(4.5, 6.0);
    rect.displayArea(); // Вывод: Area: 27
    return 0;
}
