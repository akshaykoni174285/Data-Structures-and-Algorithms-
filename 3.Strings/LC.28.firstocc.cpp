#include <iostream>
#include <string>

using namespace std;

void FirstOcc(string haystack, string needle){
    int stack_size = haystack.length();
    int needle_size = needle.length();
    for (size_t i = 0; i < 7; i++)
    {   string temp = "";

        for (size_t j = 0; j < 3; j++)
        {   
            temp = temp + haystack[i+j];
        }
        if(temp == needle){
            cout<<temp<<" "<<i<<endl;
        }
        
        
    }
    
    
    
    
}

int main(int argc, char const *argv[])
{   
    string needle = "sad";
    string haystack = "sadbutsad";
    FirstOcc(haystack, needle);
    
    return 0;
}
