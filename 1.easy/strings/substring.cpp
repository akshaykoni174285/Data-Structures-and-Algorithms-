#include <iostream>
#include <string>

using namespace std;

bool checkSubstring(string str, string checker){
    int pointer = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if(str[i] == checker[pointer]){
            pointer++;

        }
        /* code */
    }
    if(pointer < checker.length()){
        return false;
    }
    else{
        return true;
    }
    

}

int main(int argc, char const *argv[])
{
    string str = "ABCDE";
    string checker = "ABA";
    bool res = checkSubstring(str, checker);
    cout << res << endl;
    return 0;
}
