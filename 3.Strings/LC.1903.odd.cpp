#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string num = "52";
    int res = 0;

    for (size_t i = num.length(); i >=1; i--)
    {
        string temp = num.substr(0,i);
        int temp_int = stoi(temp);
        if (temp_int%2 == 1){
            res = max(res,temp_int);
        }

        
    }
    if (res == 0){
        res = "";
    }
    cout<<res<<endl;

    
    return 0;
}
