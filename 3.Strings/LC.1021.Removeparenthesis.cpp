#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "(()())(())";
    string res = "";

    // apply for loop O(n)
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' && s[i+1] == '(')
        {
            continue;
        }
        else if (s[i] == ')' && s[i+1] == ')'){
            continue;
        }
        else{
            res = res+s[i];
        }
        
        
    }
    std::cout<<res<<endl;
    
    return 0;
}
