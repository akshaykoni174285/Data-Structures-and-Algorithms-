#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int diff = 0;
    // int arr[] = {7,9,5,6,3,2};
    int arr[] = {10,20,30};
    int size_arr = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size_arr-1; i++)
    {
        /* code */
        for (int j = i+1; j < size_arr; j++)
        {
            /* code */
            if(diff<arr[j]-arr[i]){
                diff = arr[j] - arr[i];
            }
        }
        
    }
    cout<<diff<<endl;
    
    return 0;
}
