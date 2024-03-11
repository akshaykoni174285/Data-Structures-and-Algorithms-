#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {10,5,8,20,2,18};
    // time complexity of O(n^2)

    int arr_size= sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < arr_size-1; i++) //this will run till second last element 
    {
        /* code */
        int min_ind =i;

        for (int j = i+1; j < arr_size; j++) // the inner size arr will be changing every itt and getting smaller by 1 and adding till the end of the array will

        {
            if (arr[j] < arr[min_ind])
            {
                /* code */
                min_ind = j;
                // int cntr = j;
                

                
            }

            
        }
        swap(arr[i],arr[min_ind]);
        
        
        
        
    }

    for (size_t i = 0; i < arr_size; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}
