/*Переопределение операций присваивания
Задача: Реализуйте класс Matrix, который переопределяет операцию
присваивания для копирования содержимого одной матрицы в другую.*/

#include <iostream>
using namespace std;

class Matrix {
public:
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols]{};
        }
    }

    // Оператор присваивания
    Matrix& operator=(const Matrix &other) {
        if (this != &other) {
            for (int i = 0; i < rows; ++i) {
                delete[] data[i]; // Освобождение старой памяти
            }
            delete[] data;

            rows = other.rows;
            cols = other.cols;

            data = new int*[rows];
            for (int i = 0; i < rows; ++i) {
                data[i] = new int[cols];
                for (int j = 0; j < cols; ++j) {
                    data[i][j] = other.data[i][j]; // Копирование данных
                }
            }
        }
        return *this;
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

private:
    int **data;
    int rows, cols;
};

int main() {
    Matrix m1(2, 2);
    Matrix m2(2, 2);
    m2 = m1; // Операция присваивания
    m2.display(); // Выводит матрицу m1
    return 0;
}




