#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    string s = "ywwkew";
    int res_max = 0;
    int point = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[point] != s[i]){
            res_max = max((i-point) + 1,res_max);

        }
        else{

        }
    }
    

    return 0;
}
