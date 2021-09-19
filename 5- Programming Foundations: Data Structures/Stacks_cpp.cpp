#include <iostream>
#include <stack> // initialze the collection of stack
using namespace std;

int main()
{
    stack<int> stack;
    stack.push(5);
    stack.push(7);
    stack.push(12);
    stack.push(9);
    stack.push(0);
    stack.push(-4);

    cout << stack.top() << "\n" << endl ;

    while (!stack.empty())
    {
        cout << stack.top() << "  ";
        stack.pop();
    }
    
}