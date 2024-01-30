

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"hello world and lets start learning dsa"<< endl;

    // printing the star pattern by 4X4
    // for (size_t i = 0; i < 4; i++)
    // {
    //     for (size_t j = 0; j < 4; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }
    
    // print the triangle star 
    int val = 1;
    for (size_t i = 0; i < 4; i++)
    {
        for (int num=0;num<val;num++){
            cout<<"*";
        }
        val++;
        cout<<"\n";
    }
    



    return 0;
}
