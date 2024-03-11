#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {5,4,3,2,1};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int inner_it = sizeof(arr) / sizeof(arr[0]);
    // for (size_t i = 0; i < arr_size-1; i++)
    // {
    //     for (size_t i = 0; i < inner_it-1; i++)
    //     {
    //         /* code */
    //         if (arr[i] > arr[i+1]){
    //             swap(arr[i+1], arr[i]);
    //         }
    //     }
    //     --inner_it;
    //     for(auto i: arr){
    //     cout<<i<<endl;
    //     cout<<endl;
    //     }
        
    // }
    // ? optimezed soln

    for (size_t i = 0; i < arr_size-1; i++)
    {
        /* code */
        bool isSwapped = false;
        for (size_t j= 0; j < arr_size-i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwapped = true;
            }
        }
        if(isSwapped == false){
        break;
        }
        
    }
    for(auto a: arr){
        cout<<a<<endl;

    }
    

    
    
    return 0;
}
