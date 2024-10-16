/******************************************************************************

Задача: Напишите класс Book, который содержит имя книги и её цену. 
Реализуйте конструктор по умолчанию и создайте массив из пяти книг.
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string name;
    double price;
public:
    // Конструктор по умолчанию
    Book() : name("Unknown"), price(0.0) {}

    // Конструктор с параметрами
    Book(string n, double p) : name(n), price(p) {}

    void print() {
        cout << "Book: " << name << ", Price: $" << price << endl;
    }
};

int main() {
    Book books[5] = {
        Book("Book1", 9.99),
        Book("Book2", 14.99),
        Book(),
        Book("Book4", 19.99),
        Book("Book5", 24.99)
    };

    for (int i = 0; i < 5; i++) {
        books[i].print();
    }

    return 0;
}
