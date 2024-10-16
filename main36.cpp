/* Статические поля и методы
Задача: Создайте класс, 
который использует статическое поле для подсчета количества созданных объектов.*/

#include <iostream>
using namespace std;

class Counter {
public:
    Counter() {
        count++;
    }

    static int getCount() {
        return count;
    }

private:
    static int count;
};

int Counter::count = 0; // Инициализация статического поля

int main() {
    Counter c1, c2, c3;
    cout << "Number of objects: " << Counter::getCount() << endl; // Вывод: 3
    return 0;
}
