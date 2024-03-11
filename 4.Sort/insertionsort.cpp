#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {20,5,40,60,10,30};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    for (size_t i = 1; i < arr_size; i++)
    {
        /* code */
        int key = arr[i];
        int j= i-1;
        while (j>=0 && arr[j] > key)
        {
            /* code */
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
        
    }

    for (size_t i = 0; i < arr_size; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}
