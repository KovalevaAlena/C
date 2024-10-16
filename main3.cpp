/* Реализовать наследование для геометрических фигур
Реализуйте базовый класс Shape (Фигура) и производные классы Circle (Круг) и Rectangle (Прямоугольник). 
Базовый класс должен иметь чисто виртуальную функцию area(), которая вычисляет площадь фигуры.
*/

#include <iostream>
#include <cmath>

// Базовый класс Shape
class Shape {
public:
    // Чисто виртуальная функция для вычисления площади
    virtual double area() const = 0;
};

// Класс Circle (Круг)
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Переопределение функции area
    double area() const override {
        return M_PI * radius * radius;
    }
};

// Класс Rectangle (Прямоугольник)
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Переопределение функции area
    double area() const override {
        return width * height;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    std::cout << "Площадь круга: " << circle.area() << std::endl;
    std::cout << "Площадь прямоугольника: " << rectangle.area() << std::endl;

    return 0;
}
