#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {0,1,0,1,1,1,1,1,0,1,1};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int ocount;
    int count = 0;
    for (size_t i = 0; i < size_arr; i++)
    {   
        /* code */
        if(arr[i] != 1){
            
            ocount = count;
            count = 0;
        }
        else{
            count++;

        }


    }
    cout<<ocount;

    return 0;
}
