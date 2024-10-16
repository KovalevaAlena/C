/*Переопределение операций ++ и --
Задача: Реализуйте класс Counter, который имеет переопределенные операторы ++ и -- 
для увеличения и уменьшения счетчика.*/

#include <iostream>
using namespace std;

class Counter {
public:
    Counter(int value) : value(value) {}

    // Переопределение операции постфиксного инкремента
    Counter operator++(int) {
        Counter temp = *this; // Сохранение текущего состояния
        value++;              // Увеличение значения
        return temp;          // Возвращение старого значения
    }

    // Переопределение операции постфиксного декремента
    Counter operator--(int) {
        Counter temp = *this; // Сохранение текущего состояния
        value--;              // Уменьшение значения
        return temp;          // Возвращение старого значения
    }

    void display() const {
        cout << "Counter value: " << value << endl;
    }

private:
    int value;
};

int main() {
    Counter c(5);
    c.display(); // Counter value: 5
    c++;
    c.display(); // Counter value: 6
    c--;
    c.display(); // Counter value: 5
    return 0;
}
