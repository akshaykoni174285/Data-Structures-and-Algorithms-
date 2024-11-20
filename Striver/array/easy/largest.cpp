#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int greatest  = arr[0];
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    for (size_t i = 1; i < arr_size; i++)
    {
        if(arr[i] > greatest){
            greatest = arr[i];
        }
    }
    cout<<greatest<<endl;
    
    return 0;
}

