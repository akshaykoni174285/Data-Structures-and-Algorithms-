#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string parentheses = "()[]{";
    stack<char> stack;

    for (size_t i = 0; i < parentheses.length(); i++)
    {
        if(parentheses[i] == '(' || parentheses[i] == '{' || parentheses[i] == '['){
            stack.push(parentheses[i]);
        }
        else{
            if (stack.top() == '(' && parentheses[i] == ')')
            {
                stack.pop();
                
            }
            else if (stack.top() == '{' && parentheses[i] == '}')
            {
                stack.pop();
                
            }
            else if(stack.top() == '[' && parentheses[i] == ']')
            {
                stack.pop();
                
            }
            else
            {
                continue;
            }
            
            


            
        }
    
    }
    if(stack.empty()){
       cout<<"valid"; 
    }
    else{
        cout<<"invalid";
    }


    return 0;
}
