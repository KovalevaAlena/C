/* Временные и анонимные объекты
Задача: Создайте функцию, которая возвращает временный объект типа string.
*/

#include <iostream>
#include <string>
using namespace std;

string createTemporaryObject() {
    return "Временный объект"; // Временный объект
}

int main() {
    string temp = createTemporaryObject(); // Присваивание временного объекта
    cout << temp; // Вывод
    return 0;
}
