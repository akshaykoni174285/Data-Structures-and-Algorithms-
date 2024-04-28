#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    stack<char> stack;
    string parenth = "{}([())";

    for (size_t i = 0; i < parenth.length(); i++)
    {
        if (parenth[i] == '{' ||parenth[i] == '[' ||parenth[i] == '(')
        {
            stack.push(parenth[i]);
        }
        else if((stack.top() == '{' && parenth[i] == '}') || (stack.top() == '[' && parenth[i] == ']') || (stack.top() == '(' && parenth[i] == ')')){
            stack.pop();
        }
       
        
    }
    if (stack.empty()){
        cout<<"balanced parenthis"<<endl;
    }
    else{
        cout<<"not balanced parenthis"<<endl;
    }
    
    return 0;
}
