/*Переопределение операции вызова функции
Задача: Создайте класс, который переопределяет операцию вызова функции (оператор ()).*/

#include <iostream>
using namespace std;

class Functor {
public:
    void operator()(int x) {
        cout << "Functor called with value: " << x << endl;
    }
};

int main() {
    Functor f;
    f(10); // Вывод: Functor called with value: 10
    return 0;
}
