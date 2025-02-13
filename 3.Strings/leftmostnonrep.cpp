#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
    string name="akshay";
    // int count[26] = {0};
    // for (size_t i = 0; i < name.length(); i++)
    // {
    //     count[name[i] - 'a']++;

    // }
    // for (size_t i = 0; i < 26; i++)
    // {
    //     /* code */
    //     if(count[i] == 1){
    //         cout<<i<<" "<<count[i];
    //         break;
    //     }
    // }
    // efficient soln

    const int MAX = 256;
    int count[MAX] = {-1};

    for (size_t i = 0; i < name.length(); i++)
    {
        /* code */
        if(count[name[i]] == -1){
            count[name[i]] = i;
        }
        else{
            count[name[i]] = -2;
        }
    }
    int res = INT_MAX;
    for (size_t i = 0; i < 256; i++)
    {
        if(count[i]>=0){
            res = min(res, count[i]);
        }
        
    }
    cout<<res<<endl;
    

    
    
    return 0;
}
