#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <vector>
#include "Container.h"
#include "IContainer.h"
#include "IEnumerable.h"

using namespace std;

template<class T>
class Queue : public Container<T>, IContainer<T>, IEnumerable<T> {
public:
    void Push(T value) override
    {
        Container<T>::container.push_back(value);
    }
    T Pop() override
    {
        auto start = Container<T>::container.begin();
       auto temp = *(start);
        Container<T>::container.erase(start);
       return temp;
    }
    T Fetch() override
    {
        auto start = Container<T>::container.begin();
        auto temp = *start;
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


#endif //STACK_QUEUE_H
