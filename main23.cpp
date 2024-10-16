/*Описание метода вне класса. Области видимости
Задача: Опишите метод класса Student вне его определения.*/

#include <iostream>
using namespace std;

class Student {
public:
    Student(string name) : name(name) {}

    void displayInfo();

private:
    string name;
};

// Определение метода вне класса
void Student::displayInfo() {
    cout << "Student name: " << name << endl;
}

int main() {
    Student s("John");
    s.displayInfo(); // Student name: John
    return 0;
}
