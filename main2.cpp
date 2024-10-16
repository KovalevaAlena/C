/* Реализовать класс для работы со стеком (АТД)
Реализуйте абстрактный тип данных (АТД) "стек" с поддержкой следующих операций:

    Добавление элемента в стек (push).
    Удаление элемента из стека (pop).
    Получение верхнего элемента стека (top).
    Проверка, пуст ли стек (isEmpty).
*/

#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> elements;

public:
    // Добавление элемента в стек
    void push(int value) {
        elements.push_back(value);
    }

    // Удаление элемента из стека
    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        } else {
            std::cout << "Стек пуст!" << std::endl;
        }
    }

    // Получение верхнего элемента стека
    int top() const {
        if (!elements.empty()) {
            return elements.back();
        } else {
            std::cout << "Стек пуст!" << std::endl;
            return -1; // Возвращаем значение по умолчанию
        }
    }

    // Проверка, пуст ли стек
    bool isEmpty() const {
        return elements.empty();
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Верхний элемент: " << stack.top() << std::endl;

    stack.pop();
    std::cout << "После удаления верхний элемент: " << stack.top() << std::endl;

    while (!stack.isEmpty()) {
        stack.pop();
    }

    return 0;
}
