#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class MinStack
{
private:
    stack<int> mystack;
    stack<int> minStack;

public:
    MinStack() {}

    void push(int val)
    {
        mystack.push(val);
        val = min(val, minStack.empty() ? val : minStack.top());
    }
    void pop()
    {
        mystack.pop();
        minStack.pop();
    }

    int top()
    {
        return mystack.top();
    }

    int getMin()
    {
        return minStack.top();
    }
};

int main(int argc, char const *argv[])
{
    stack<int> mystack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.printStack();

    return 0;
}
