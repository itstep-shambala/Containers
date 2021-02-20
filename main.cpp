#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "utils.h"

using namespace std;

int main()
{
    system("chcp 65001");

    Queue<int> queue;
    queue.Push(15);
    queue.Push(23);
    queue.Push(-31);
    queue.Push(123);
    int temp = queue.Pop();
    cout << "Pop() " << temp << endl;
    temp = queue.Fetch();
    cout << "Fetch() " << temp << endl;
    Utils::PrintQueue(queue);
    queue.ForEach(Utils::Print);
    queue.ForEach(Utils::Plus5);
    cout << endl;
    queue.ForEach(Utils::Print);

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
    */
    return 0;
}
