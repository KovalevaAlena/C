/* Ссылки как семантический феномен
Задача: Напишите функцию, 
которая принимает ссылку на строку и изменяет все
символы в строке на заглавные.
*/

#include <iostream>
#include <string>
using namespace std;

void toUpperCase(string &str) {
    for (char &c : str) {
        c = toupper(c);
    }
}

int main() {
    string text = "hello world";
    toUpperCase(text);
    cout << text; // Вывод: "HELLO WORLD"
    return 0;
}
