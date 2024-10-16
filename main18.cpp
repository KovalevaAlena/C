/* Константные методы
Задача: Реализуйте класс Car, 
в котором есть метод для вывода информации о машине.
Метод должен быть константным.
*/

#include <iostream>
using namespace std;

class Car {
public:
    Car(string model, int year) : model(model), year(year) {}

    void displayInfo() const {
        cout << "Модель: " << model << ", Год: " << year << endl;
    }

private:
    string model;
    int year;
};

int main() {
    Car car("Toyota", 2020);
    car.displayInfo(); // Вывод: Model: Toyota, Year: 2020
    return 0;
}

