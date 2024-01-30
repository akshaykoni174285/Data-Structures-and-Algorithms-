
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};
    // 1,3,4,5
    //? traversing the array
    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    
    // ? inserting the val in pos 
    // int pos = 1;
    // int value = 5;
    // int length = 4;
    int arr_len = 5;

    // if (length<arr_len){
    //     for (size_t i = length; i > pos; i--)
    //     {
    //         arr[i] = arr[i-1];

    //     }
    //     arr[pos] = value;
    // }
    // else {
    //     cout<<"no change"<<endl;
    // }
    // ? deletion in array
    // int del_ind = 1;

    // for (size_t i = del_ind; i < arr_len-1; i++)
    // {
    //     arr[i] = arr[i+1];

    // }

    

    for (size_t i = 0; i < arr_len-1; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    

    return 0;
}
