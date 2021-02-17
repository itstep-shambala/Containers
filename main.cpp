#include <iostream>
#include "Stack.h"
#include "utils.h"
#include "Queue.h"

using namespace std;

int main()
{
    system("chcp 65001");
/*
    Stack<int> temp;

    Utils::PrintStack(temp);
    temp.Push(5);
    Utils::PrintStack(temp);
    temp.Push(10);
    Utils::PrintStack(temp);
    int one = temp.Pop();
    int two = temp.Pop();
    Utils::PrintStack(temp);
    cout << two << " " << one << endl;

    temp.Push(1);
    temp.Push(2);
    temp.Push(3);
    Utils::PrintStack(temp);

    temp.ForEach(Utils::Print);
    temp.ForEach(Utils::Plus5);
    cout << endl;
    temp.ForEach(Utils::Print);

    return 0;
    */
    Queue<int> temp;

    Utils::PrintQueue(temp);
    temp.Push(5);
    Utils::PrintQueue(temp);
    temp.Push(10);
    Utils::PrintQueue(temp);
    int one = temp.Pop();
    int two = temp.Pop();
    Utils::PrintQueue(temp);
    cout << two << " " << one << endl;

    temp.Push(1);
    temp.Push(2);
    temp.Push(3);
    Utils::PrintQueue(temp);

    temp.ForEach(Utils::Print);
    temp.ForEach(Utils::Plus5);
    cout << endl;
    temp.ForEach(Utils::Print);
}
