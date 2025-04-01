#include <iostream>
#include <string>
#include <vector>



using namespace std;

int main(int argc, char const *argv[])
{
    string haystack = "leetcode";
    string needle = "leet";
    int res;
    bool flag = true;
    int j;

    for (int i=0;i<=haystack.size()-needle.size();i++) {
        if(needle[0]==haystack[i]){
            int j=1;
            while (j<needle.size() && needle[j]==haystack[i+j])
        {
            j++;
        }
        flag = (j == needle.size())? true : false;
        }
        
        
    }
    cout<<j<<endl;
    cout<<flag<<endl;
    return 0;
}
