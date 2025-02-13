#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    cin >> name;
    const int MAX_SIZE = 256;
    bool count[MAX_SIZE] = {false};
    int counter = 0;

    for (size_t i = 0; i < name.length(); i++)
    {
        count[name[i]] = true;
    }
    for (size_t i = 0; i < 256; i++)
    {
        if (count[i]){
            counter++;
        }
    }
    if (counter %2==1){
        cout<<"IGNORE HIM!";

    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
    
    
    
    return 0;
}
