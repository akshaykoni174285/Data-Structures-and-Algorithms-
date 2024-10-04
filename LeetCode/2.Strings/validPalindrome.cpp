#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    string name = "A man, a plan, a canal: Panama";
    string cleaned = "";
    for(int i = 1; i < name.length(); i++){
        if (isalnum(name[i])){
            continue;
        }
        name[i] = tolower(name[i]);
    }
    for (size_t i = 0; i < name.length(); i++)
    {
        /* code */
        cout<<name[i];
    }
    
    return 0;
}
