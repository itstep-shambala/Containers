#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <vector>
#include "Container.h"
#include "IContainer.h"
#include "IEnumerable.h"

using namespace std;

template<class T>
class Stack : public Container<T>, IContainer<T>, IEnumerable<T> {
public:
    void Push(T value) override
    {
        Container<T>::container.push_back(value);
    }
    T Pop() override
    {
        auto end = Container<T>::container.end();
        auto temp = *(end-1);
        Container<T>::container.pop_back();
        return temp;
    }
    T Fetch() override
    {
        auto end = Container<T>::container.end();
        auto temp = *(end-1);
        return temp;
    }

    void ForEach(void(*Func)(T)) override
    {
        for (auto element : Container<T>::container) {
            Func(element);
        }
    }
    void ForEach(T(*Func)(T)) override
    {
        for (auto i = Container<T>::container.begin(); i != Container<T>::container.end(); ++i) {
            *i = Func(*i);
        }
    }
};

#endif //STACK_STACK_H
