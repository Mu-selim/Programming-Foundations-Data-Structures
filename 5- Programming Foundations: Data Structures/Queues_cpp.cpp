#include <iostream>
#include <queue> // initialze the collection of queue
using namespace std;

int main()
{
    queue<int> qu;
    qu.push(45);
    qu.push(4);
    qu.push(78);
    qu.push(-51);
    qu.push(38);
    qu.push(98);
    qu.push(-98);
    qu.push(65);

    cout << "size of queue = " << qu.size() << endl;
    cout << "front of queue = " << qu.front() << endl;
    cout << "back of queue = " << qu.back() << endl;

    while(!qu.empty())
    {
        cout << qu.front() << "  ";
        qu.pop();
    }
}