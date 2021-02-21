#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "utils.h"

using namespace std;

int main()
{
    system("chcp 65001");
    //стек
    Stack temp;

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

    //очередь
    Queue queue;
    Utils::PrintQueue(queue);
    temp.Push(5);
    Utils::PrintQueue(queue);
    temp.Push(10);
    Utils::PrintQueue(queue);
    int oneA = queue.Pop();
    int twoB = queue.Pop();
    Utils::PrintQueue(queue);
    cout << oneA << " " << twoB << endl;
    queue.Push(1);
    queue.Push(2);
    queue.Push(3);
    Utils::PrintStack(queue);

    queue.ForEach(Utils::Print);
    queue.ForEach(Utils::Plus5);
    cout << endl;
    queue.ForEach(Utils::Print);





    return 0;
}
