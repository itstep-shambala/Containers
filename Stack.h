#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <vector>

using namespace std;

class Stack {
private:
    vector<int> stack;
public:
    void Push(int value)
    {
        stack.push_back(value);
    }
    int Pop()
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
    int Fetch()
    {
        auto end = stack.end();
        auto temp = *(end-1);
        return temp;
    }
    void ForEach(void(*Func)(int))
    {
        for (auto element : stack) {
            Func(element);
        }
    }
    void ForEach(int(*Func)(int))
    {
        for (auto i = stack.begin(); i != stack.end(); ++i) {
            *i = Func(*i);
        }
    }
};

#endif //STACK_STACK_H
