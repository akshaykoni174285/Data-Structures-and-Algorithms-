#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {7,10,4,10,6,5,2};
    // int arr[] = {30,20,10,5};
    // int arr[] = {4,5,6,7,8,9};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    // ?lets check for O(n)
    int curr_lead = arr[size_arr-1];
    
    for (int i = size_arr - 2; i >= 0; i--){
        /* code */
        if(arr[i] >= curr_lead){
            cout<<curr_lead<<endl;
            curr_lead = arr[i];
            
        }
    }
    

    // ? this is for O(n^2)

    // for (size_t i = 0; i < size_arr; i++)
    // {
    //     bool flag = false;
    //     for (size_t j = i+1; j < size_arr; j++)
    //     {
    //         /* code */
            
    //         if (arr[i] <= arr[j]){
    //             flag = true;
    //             break;
    //         }
    //     //    else if(j == size_arr-1){
    //     //         cout<<arr[i]<<endl;
    //        }
    //        if (flag == false){
    //         cout<<arr[i]<<endl;
    //        }
    // }
            
        
        
          
    
    // cout<<arr[size_arr-1] << endl;
        
    return 0;
}
