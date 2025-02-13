#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    stack<char> stack;
    string name = "([{}])";

    for(auto chr:name){
        if (chr == '{' || chr =='[' || chr == '('){
            stack.push(chr);
        }
        else {
            if (stack.empty()) return false;
            if ((chr == '}' && stack.top() == '{') || (chr == ']' && stack.top() == '[') || (chr == ')' && stack.top() =='(')){
                stack.pop();
            }
            else return false;
        }
    }

    if (stack.empty()){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }

    return 0;
}
