#pragma once

#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

class Utils {
public:
    static void PrintStack(Stack<int> stack)
    {
        if (stack.isEmpty()) {
            cout << "Стэк пустой" << endl;
        } else {
            cout << "Стек содержит " << stack.Size() << " элементов" << endl;
        }
    }
    static void PrintQueue(Queue<int> queue)
    {
        if (queue.isEmpty()) {
            cout << "Стэк пустой" << endl;
        } else {
            cout << "Стек содержит " << queue.Size() << " элементов" << endl;
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


