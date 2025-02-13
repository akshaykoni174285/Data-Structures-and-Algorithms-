#include <iostream>
#include <vector>
#include <stack>


// #just testing the code 
using namespace std;

int evalRPN(vector<string>& tokens){
    stack<int> stack;
    int res;
    for(const string& token : tokens){
        if (token == "+"){
            int val1 = (stack.top());
            stack.pop();
            int val2 = (stack.top());
            stack.pop();
            stack.push(val1+val2);
        }
        else if (token == "-"){
            int val1 = (stack.top());
            stack.pop();
            int val2 = (stack.top());
            stack.pop();
            stack.push(val2 - val1);
        }
        else if (token == "*"){
            int val1 = (stack.top());
            stack.pop();
            int val2 = (stack.top());
            stack.pop();
            stack.push(val2*val1);
        }
        else if (token == "/"){
            int val1 = (stack.top());
            stack.pop();
            int val2 = (stack.top());
            stack.pop();
            stack.push(val2/val1);
        }
        else stack.push(stoi(token));
    }
    return stack.top();

}

int main(int argc, char const *argv[])
{
    vector<string> tokens = {"1","2","+","3","*","4","-"};

    int res = evalRPN(tokens);
    cout<<res<<endl;
    return 0;
}
