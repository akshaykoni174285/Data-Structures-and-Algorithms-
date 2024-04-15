#include <iostream>
#include <string>

using namespace std;

int ImprovedPattern(string &name, string &pattern) {
    int count = 0;
     for (size_t i = 0; i < name.length(); i++)
     {
        
        if(name[i] == pattern[count]){
            count++;
        }
        else{
            count = 0;

        }
        if(count == pattern.length()-1){
            return i-1;
        }
        

     }
     return -1;
     
     
}

int main(int argc, char const *argv[])
{
    string name = "abcaaad";
    string pattern = "abc";
    int res = ImprovedPattern(name, pattern);
    cout<<res<<endl;

    return 0;
}
