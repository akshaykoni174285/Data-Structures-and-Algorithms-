#include <iostream>
#include <string>

using namespace std;


int PatternMatch(string &larstr, string &pattern){
    int larstr_size = larstr.length();
    int pattern_size = pattern.length();
    for (int  i = 0; i < larstr_size-pattern_size+1; i++)
    {
        for (int j = 0; j < pattern_size; j++){
            if(pattern[j] != larstr[i+j]){
                break;

            }
            if(j == pattern_size-1){
                return i;
            }
        }
    }
    
    
   
}


int main(int argc, char const *argv[])
{
    string largestring = "akshay";
    string pattern = "ksh";
    int res = PatternMatch(largestring, pattern);
    cout<<res<<endl;
    return 0;
}
