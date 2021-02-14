#ifndef STACK_CONTAINER_H
#define STACK_CONTAINER_H

#include <vector>

using namespace std;

template<class T>
class Container {
protected:
    vector<T> container;
public:
    void Clear()
    {
        container.clear();
    }
    int Size()
    {
        return container.size();
    }
    bool isEmpty()
    {
        if (container.empty()) {
            return true;
        } else {
            return false;
        }
    }
};


#endif //STACK_CONTAINER_H
