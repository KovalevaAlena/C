/* Значения параметров по умолчанию
Задача: Напишите функцию, которая принимает два целых числа, где одно из них имеет значение по умолчанию.
*/

#include <iostream>
using namespace std;

void display(int a, int b = 5) {
    cout << "a = " << a << ", b = " << b << endl;
}

int main() {
    display(3); // a = 3, b = 5
    display(3, 7); // a = 3, b = 7
    return 0;
}
