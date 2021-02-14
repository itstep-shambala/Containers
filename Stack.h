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
        auto temp = *end;
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
};

#endif //STACK_STACK_H
