#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{   
    string s = "ABABBA";
    int k=2;
    unordered_map<char,int> map;

    int l=0;
    int maxf=0;
    int res = 0;
    for (int r = 0; r < s.length(); r++)
    {
        map[s[r]]++;
        maxf = max(maxf,map[s[r]]);

        while ((r-l+1) - maxf > k)
        {
            map[s[l]]--;
            l++;
        }
        res = max(res,r-l+1);
        

    }

    cout<<res<<endl;
    

    
    return 0;
}
