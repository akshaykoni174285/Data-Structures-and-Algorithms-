#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string num = "35427";
    int res = 0;

    for (size_t i = 0; i < num.length(); i++)
    {
        int temp = to_int(num[i]);
        if (temp%2==1){
            res = max(res, temp);
        }
    }
    cout<<res<<endl;
    
    return 0;
}
