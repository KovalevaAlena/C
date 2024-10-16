/*  Полиморфизм через указатели
Создайте массив указателей на базовый класс Shape 
и продемонстрируйте полиморфизм, 
создавая объекты различных типов фигур (круг и прямоугольник) 
и вызывая для них функцию area.
*/

#include <iostream>
#include <vector>

int main() {
    std::vector<Shape*> shapes;

    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(4.0, 6.0));

    for (Shape* shape : shapes) {
        std::cout << "Площадь фигуры: " << shape->area() << std::endl;
    }

    // Удаление объектов
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
