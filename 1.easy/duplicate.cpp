#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {10,20,20,30,30,30};
    int size_of_arr = sizeof(arr)/sizeof(arr[0]);
    int temp[size_of_arr];
    temp[0] = arr[0];
    int counter = 1;
    int res = size_of_arr;

    // for (size_t i = 0; i < size_of_arr; i++)
    // {
    //     if (arr[i]!=temp[counter-1]){
    //         temp[counter] = arr[i];
    //         counter++;
    //     }
    // }
    

    for(size_t i = 0; i < size_of_arr; i++)
    {
        if (arr[i] == arr[i+1]){
            // call the element if its same 
            for (size_t j = res-1; j>i+1; j--)
            {
                arr[j-1] = arr[j];
            }

            size_of_arr--;
        }
    }

    for (size_t i = 0; i < size_of_arr; i++)
    {
        cout<<arr[i]<<endl;
    }
    // cout<<size_of_arr;
    return 0;
}
