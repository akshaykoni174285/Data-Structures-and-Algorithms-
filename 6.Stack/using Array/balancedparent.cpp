#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<char> Stack;
    string parent = "{}()(";

    for (size_t i = 0; i < parent.length(); i++)
    {   
        if(parent[i] == '{' || parent[i] == '[' || parent[i] == '('){
            
            Stack.push(parent[i]);
        }
        else{
            if (!Stack.empty()){
                char ch = parent[i];
                if ((ch == ')' && Stack.top() == '(') || 
                        (ch == '}' && Stack.top() == '{') ||
                        (ch == ']' && Stack.top() == '[')){
                            Stack.pop();
                        }
                else{
                    cout<<"not balanced"<<endl;
                    exit(0);
                }
            }
            else{
                cout<<"not balanced"<<endl;
                    exit(0);

            }
        }
    }

    if(Stack.empty()){
        cout<<"balanced"<<endl;
    }
    else{
        cout<<"not balanced"<<endl;
    }
    
    return 0;
}
