#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {0,1,2,2,3};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int j = 0;
    for (size_t i = 1; i < size_arr; i++)
    {
        if(arr[i]!=arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }

    for (size_t i = 0; i < size_arr; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}
