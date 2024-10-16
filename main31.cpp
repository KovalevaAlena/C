/*Переопределение операции ->
Задача: Создайте класс SmartPointer, 
который будет эмулировать умный указатель с переопределенной операцией ->.*/

#include <iostream>
using namespace std;

class Test {
public:
    void show() {
        cout << "Test class method called!" << endl;
    }
};

class SmartPointer {
public:
    SmartPointer(Test *ptr) : ptr(ptr) {}

    // Переопределение операции ->
    Test* operator->() {
        return ptr;
    }

    ~SmartPointer() {
        delete ptr;
    }

private:
    Test *ptr;
};

int main() {
    SmartPointer sp(new Test());
    sp->show(); // Вывод: Test class method called!
    return 0;
}
