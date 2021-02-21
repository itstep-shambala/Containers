#include <iostream>
#include "Stack.h"
#include "utils.h"
#include "Queue.h"

using namespace std;

int main()
{
    system("chcp 65001");

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

    //------------------
    cout << endl;
    cout << endl;

Queue<int> temp2;
    Utils::PrintQueue(temp2);
    temp2.Push(1);
    Utils::PrintQueue(temp2);
    temp2.Push(2);
    Utils::PrintQueue(temp2);
    temp2.Push(3);
    Utils::PrintQueue(temp2);

    int one2 = temp2.Pop();
    int two2 = temp2.Pop();
    Utils::PrintQueue(temp2);
    cout << one2 << " " << two2 << endl;
    temp2.Push(4);
    temp2.Push(5);
    temp2.Push(6);
    temp2.ForEach(Utils::Print);
    temp.ForEach(Utils::Plus5);
    cout << endl;
    temp.ForEach(Utils::Print);

return 0;
}
