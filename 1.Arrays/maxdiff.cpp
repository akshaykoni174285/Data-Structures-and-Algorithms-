#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int diff = 0;
    int arr[] = {7,9,5,6,3,2};
    // int arr[] = {10,20,30};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    // ? lets try for O(n)
    int res = arr[1]-arr[0];
    int min_val = arr[0];
    for (size_t i = 1; i < size_arr; i++)
    {
        /* code */
        res = max(res, arr[i] - min_val);
        min_val = max(min_val, arr[i]);
    }
    cout<<res;
    
    // ? this is O(n^2)
    // for (int i = 0; i < size_arr-1; i++)
    // {
    //     /* code */
    //     for (int j = i+1; j < size_arr; j++)
    //     {
    //         /* code */
            
    //         diff = max(diff , arr[j]-arr[i]);
            
    //     }
        
    // }

    // cout<<diff<<endl;
    
    return 0;
}
