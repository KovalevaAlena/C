/******************************************************************************
Задача: Напишите программу, которая демонстрирует 
использование обработчика с многоточием для 
перехвата любых типов исключений, 
не предусмотренных явными catch блоками.
*******************************************************************************/
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        // Некоторая операция, которая может вызвать разные типы исключений
        cout << "Выбираем тип исключения:\n1. invalid_argument\n2. runtime_error\n3. другое\nВаш выбор: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            throw invalid_argument("Неверный аргумент.");
        }
        else if (choice == 2) {
            throw runtime_error("Ошибка выполнения.");
        }
        else {
            throw "Неизвестная ошибка.";
        }
    }
    catch (const invalid_argument& e) {
        cout << "Поймано invalid_argument: " << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cout << "Поймано runtime_error: " << e.what() << endl;
    }
    catch (...) {
        cout << "Поймано неизвестное исключение." << endl;
    }

    return 0;
}


