#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <vector>
#include "Container.h"
#include "IContainer.h"
#include "IEnumerable.h"
#include <stack>

using namespace std;

template<typename T>
class Stack : public Container<T>, IContainer<T>, IEnumerable<T> {
public:
    Container<T> container;
    void Push(T value) override
    {
        container.push_back(value);
    }
    T Pop() override
    {
        auto end = container.end();
        auto temp = *(end-1);
        container.pop_back();
        return temp;
    }
    T Fetch() override
    {
        auto end = container.end();
        auto temp = *(end-1);
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

#endif //STACK_STACK_H
