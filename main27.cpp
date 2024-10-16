/*Дружественные функции и классы
Задача: Создайте дружественную функцию для класса,
которая будет изменять приватные члены класса.*/

#include <iostream>
using namespace std;

class Box {
private:
    int length;
public:
    Box(int len) : length(len) {}

    // Дружественная функция
    friend void modifyLength(Box &box, int newLength);
};

void modifyLength(Box &box, int newLength) {
    box.length = newLength; // Доступ к приватному члену
}

int main() {
    Box b(5);
    modifyLength(b, 10);
    cout << "New length: " << b.length << endl; // Вывод: New length: 10
    return 0;
}



