#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <vector>

using namespace std;

template<class T>
class Stack {
private:
    vector<T> stack;
public:
    void Push(T value)
    {
        stack.push_back(value);
    }
    T Pop()
    {
        auto end = stack.end();
        auto temp = *(end-1);
        stack.pop_back();
        return temp;
    }
    bool isEmpty()
    {
        if (stack.empty()) {
            return true;
        } else {
            return false;
        }
    }
    int Size()
    {
        return stack.size();
    }
    T Fetch()
    {
        auto end = stack.end();
        auto temp = *(end-1);
        return temp;
    }
    void ForEach(void(*Func)(T))
    {
        for (auto element : stack) {
            Func(element);
        }
    }
    void ForEach(T(*Func)(T))
    {
        for (auto i = stack.begin(); i != stack.end(); ++i) {
            *i = Func(*i);
        }
    }
    void Clear()
    {
        stack.clear();
    }
};

#endif //STACK_STACK_H
