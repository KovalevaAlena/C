/*Методы, возникающие неявно
Задача: Объясните и покажите пример метода, который вызывается неявно, 
например, конструктор копирования.*/

#include <iostream>
using namespace std;

class Person {
public:
    Person(string name) : name(name) {}

    void display() {
        cout << "Person's name: " << name << endl;
    }

private:
    string name;
};

int main() {
    Person p1("Alice");
    Person p2 = p1; // Неявный вызов конструктора копирования
    p2.display(); // Person's name: Alice
    return 0;
}




