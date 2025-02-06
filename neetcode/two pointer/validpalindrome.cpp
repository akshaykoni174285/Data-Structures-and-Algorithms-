#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string name = "Was it a car or a cat I saw?";
    string clean = "";

    for(auto i:name){
        if (i.isalnum()){
            clean.insert(i);
        }
    }

    return 0;
}
