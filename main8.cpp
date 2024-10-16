/*  Реализация деструктора для класса, работающего с файлом
Условие задачи: Создать класс FileHandler,
который управляет открытием и закрытием файла.
Необходимо использовать деструктор для закрытия файла,
если объект этого класса больше не используется. 
Реализуйте методы для открытия и закрытия файла.
*/

#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
private:
    ifstream file;  // Поток для чтения из файла

public:
    // Конструктор открывает файл
    FileHandler(const string& filename) {
        file.open(filename);
        if (!file) {
            cerr << "Ошибка открытия файла" << endl;
        }
    }

    // Метод для чтения из файла
    void readFile() {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }

    // Деструктор автоматически закрывает файл при уничтожении объекта
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "Файл закрыт успешно" << endl;
        }
    }
};

int main() {
    FileHandler fh("file.txt");  // Создаем объект, открывающий файл
    fh.readFile();  // Читаем из файла
    // Файл автоматически закроется, когда объект `fh` выйдет из области видимости
    return 0;
}

