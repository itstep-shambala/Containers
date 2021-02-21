#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <vector>
#include "Container.h"
#include "IContainer.h"
#include "IEnumerable.h"

using namespace std;

template<class T>
class Queue : public Container<T> {
    void Push(T value) override
    {
        container.push_back(value);
    }
    T Pop() override
    {
        auto begin = container.begin();
        auto temp = *begin;
        auto iter = container.cbegin(); //константный указатель на первый элемент
        container.erase(iter);
        return temp;
    }
    T Fetch() override
    {
        auto begin = container.begin();
        auto temp = *begin;
        return temp;
    }
    void ForEach(void(*Func)(T)) override
    {
        for (auto element : container) {
            Func(element);
        }
    }
    void ForEach(T(*Func)(T)) override
    {
        for (auto i = container.begin(); i != container.end(); ++i) {
            *i = Func(*i);
        }
    }

};


#endif //STACK_QUEUE_H
