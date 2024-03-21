#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> s = {"h","e","l","l","o"};
    int max = s.size()-1;
    int min = 0;
    while (min<=max)
    {
        /* code */
        swap(s[min],s[max]);
        min++;
        max--;
    }
    for (size_t i = 0; i < s.size(); i++)
    {
        /* code */
        cout<<s[i]<<endl;
    }
    
    

    return 0;
}
