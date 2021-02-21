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
    Container<T> container;
    void Push(T value) override // добавление в очередь
    {
        container.push_back(value);
    }
    T Pop() override // удаление из очереди
    {
        auto add = container.begin();
        auto temp = *(add);
        container.pop_back();
        return temp;
    }
    T Fetch() override //принести
    {
        auto add = container.begin();
        auto temp = *(add);
        return temp;
    }

    void ForEach(void(*Func)(T)) override //для каждого
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
