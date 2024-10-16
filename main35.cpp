/* Пример разреженного массива
Задача: Реализуйте класс для разреженного массива, 
который использует хеш-таблицу для хранения значений.*/

#include <iostream>
#include <unordered_map>
using namespace std;

template <typename T>
class SparseArray {
public:
    void set(int index, T value) {
        data[index] = value;
    }

    T get(int index) {
        if (data.find(index) != data.end()) {
            return data[index];
        }
        return T(); // Возвращает значение по умолчанию, если элемент не найден
    }

private:
    unordered_map<int, T> data;
};

int main() {
    SparseArray<int> arr;
    arr.set(5, 10);
    arr.set(100, 20);
    cout << arr.get(5) << endl;   // Вывод: 10
    cout << arr.get(100) << endl; // Вывод: 20
    cout << arr.get(1) << endl;   // Вывод: 0 (значение по умолчанию)
    return 0;
}


