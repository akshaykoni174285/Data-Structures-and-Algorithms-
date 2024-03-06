#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    int eual_parts = num /2;
    if(num%2 == 0 && eual_parts%2 == 0){
        cout<<"YES";

    }
    else {
        cout<<"NO";

    }
    return 0;
}
