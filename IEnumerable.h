#ifndef STACK_IENUMERABLE_H
#define STACK_IENUMERABLE_H

template<class T>
class IEnumerable {
    virtual void ForEach(void(*Func)(T)) = 0;
    virtual void ForEach(T(*Func)(T)) = 0;
};


#endif //STACK_IENUMERABLE_H
