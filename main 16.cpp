/******************************************************************************
Задача: Напишите функцию, которая принимает константную 
ссылку на строку и выводит её длину.
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

void printLength(const string& str) {
    cout << "Length of string \"" << str << "\" is " << str.length() << " characters." << endl;
}

int main() {
    string myString = "Hello, World!";
    printLength(myString);
    return 0;
}

