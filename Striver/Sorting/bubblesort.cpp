#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2,3,4,1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < arr_size-1; i++) 
    // this will go to size -1 
    {
        /* code */
        for (int j = 0; j < arr_size - i-1;j++){
            // this will also go from 0 to size -1 with 1 decreasing 
              if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        }
      
    }
    
    for (size_t i = 0; i < arr_size; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
