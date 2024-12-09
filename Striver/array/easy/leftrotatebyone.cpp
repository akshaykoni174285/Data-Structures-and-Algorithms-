#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // optimized sol

    int arr[] = {1,2,3,4};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int key = arr[0];
    for (size_t i = 1; i < size_arr; i++)
    {
        /* code */
        arr[i-1] = arr[i];
    }
    arr[size_arr-1] = key;

    for (size_t i = 0; i < size_arr; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
