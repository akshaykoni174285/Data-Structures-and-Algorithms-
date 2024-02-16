#include <iostream>
#include <vector>


using namespace std;

int main(int argc, char const *argv[])
{
    string address = "1.1.1.1";
    string ans;
    for(auto x: address){
        if (x == '.')
        {
            ans+= "[.]";
            
        }
        else
        {
            ans+=x;
        }
            
    }

    cout << ans <<endl;
    return 0;
}
