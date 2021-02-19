#ifndef STACK_UTILS_H
#define STACK_UTILS_H

#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

class Utils {
public:
    static void PrintStack(Stack stack)
    {
        if (stack.isEmpty()) {
            cout << "Стэк пустой" << endl;
        } else {
            cout << "Стек содержит " << stack.Size() << " элементов" << endl;
        }
    }
    static void PrintQueue(Queue queue)
    {
        if (queue.isEmpty()) {
            cout << "Очередь пустая" << endl;
        }
        else {
            cout << "Очередь содержит " << queue.Size() << " элементов" << endl;
        }
    }

    static void Print(int number)
    {
        cout << number << " ";
    }

    static int Plus5(int number)
    {
        return number + 5;
    }
};


#endif //STACK_UTILS_H
