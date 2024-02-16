#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // int arr[] = {10,10,10,25,30,30};
    // int arr[] = {10,10,10,10};
    int arr[] = {1,2,3,4};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int current_val = arr[0];
    int freq = 1;

    for (size_t i = 1; i < size_arr+1; i++)
    {
        /* code */
        if(current_val == arr[i]){
            freq++;
        }
        else{
            cout<<current_val<<" " <<freq<<endl;
            current_val = arr[i];
            freq = 1;
        }
    }
    

    return 0;
}
