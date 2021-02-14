#ifndef STACK_ICONTAINER_H
#define STACK_ICONTAINER_H

template<class T>
class IContainer {
    virtual T Pop() = 0;
    virtual void Push(T) = 0;
    virtual T Fetch() = 0;
};


#endif //STACK_ICONTAINER_H
