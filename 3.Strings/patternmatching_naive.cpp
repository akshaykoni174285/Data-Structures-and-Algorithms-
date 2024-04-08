#include <iostream>
#include <string>

using namespace std;


int PatternMatch(string &larstr, string &pattern){
    int larstr_size = larstr.length();
    int pattern_size = pattern.length();
    for (size_t i = 0; i < larstr_size-pattern_size; i++)
    {
        for (size_t j = 0; j < pattern_size; j++){
            if(pattern[j] != larstr[i+j]){
                break;

            }
            if(i == j){
                return i;
            }
        }
    }
    
    
   
}


int main(int argc, char const *argv[])
{
    string largestring = "akshay";
    string pattern = "hay";
    int res = PatternMatch(largestring, pattern);
    cout<<res<<endl;
    return 0;
}
