#include <iostream>
#include <string>

using namespace std;
//? time complexity O(n^2)
// int LeftRepString(string name){
//     for (size_t i = 0; i < name.length()-1; i++)
//     {
//         for (size_t j = 1; i < name.length(); i++)
//         {
//             if(name[i] == name[j]){
//                 return i;
//             }
//         }
//     }
    
    
// }
// time complexity in O(n)

int LeftRepString(string &name){
    const int CHAR = 26;
    int count[CHAR] = {0};
    for (size_t i = 0; i < name.length(); i++)
    {
        count[name[i]]++;
    }
    for (size_t i = 0; i < name.length(); i++) {
        if(count[name[i]] > 2){
            return i;
        }
    }
    
    
}




int main(int argc, char const *argv[])
{
    string name = "abcbd";

    int res = LeftRepString(name);
    cout<<res<<endl;
    return 0;
}
