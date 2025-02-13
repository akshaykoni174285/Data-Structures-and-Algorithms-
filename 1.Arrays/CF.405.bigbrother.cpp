#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a; 
    int b;
    cin>>a>>b;
    int yeardiff = 0;
    while (a <= b)
    {
        /* code */
        a = a*3;
        b = b*2;
        yeardiff++;
    }
    cout<<yeardiff<<endl;
    
    return 0;
}
