/* Конструктор копирования
Задача: Напишите класс Point, который имеет конструктор копирования.
*/

#include <iostream>
using namespace std;

class Point {
public:
    Point(int x, int y) : x(x), y(y) {}
    
    // Конструктор копирования
    Point(const Point &other) : x(other.x), y(other.y) {}

    void display() {
        cout << "Точка(" << x << ", " << y << ")" << endl;
    }

private:
    int x, y;
};

int main() {
    Point p1(3, 4);
    Point p2 = p1; // Конструктор копирования

    p1.display(); // Point(3, 4)
    p2.display(); // Point(3, 4)

    return 0;
}


