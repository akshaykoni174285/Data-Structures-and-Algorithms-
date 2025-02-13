#include <iostream>
#include <vector>
#include <string>
// #include <tring>
using namespace std;

int main(int argc, char const *argv[])
{
    string name = "geeksofgeeks";
    int count[26] = {0};
    for (size_t i = 0; i < name.length(); i++)
    {
        /* code */
        count[name[i] - 'a']++;

    }
    for (size_t i = 0; i < 26; i++)
    {
        /* code */
        if (count[i] > 0)
        {
            /* code */

            cout<<char(i + 'a')<<" "<<count[i]<<endl;
        }
        
    }
    
    

    return 0;
}
