#ifndef STACK_UTILS_H
#define STACK_UTILS_H

#include <iostream>
#include "Stack.h"

using namespace std;

class Utils {
public:
    template <class T>
    static void PrintStack(Stack<T> stack)
    {
        if (stack.isEmpty()) {
            cout << "Стэк пустой" << endl;
        } else {
            cout << "Стек содержит " << stack.Size() << " элементов" << endl;
        }
    }

    template <class T>
    static void PrintQueue(Queue<T> queue)
    {
        if (queue.isEmpty()) {
            cout << "Очередь пустая" << endl;
        }
        else {
            cout << "Очередь содержит " << queue.Size() << " элементов" << endl;
        }
    }

    template <class T>
    static void Print(T number)
    {
        cout << number << " ";
    }

    template <class T>
    static T Plus5(T number)
    {
        return number + 5;
    }
};


#endif //STACK_UTILS_H
