#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {8,5,0,10,0,20};
    // int arr[] = {0,0,0,0,0,0};
    int size_of_arr = sizeof(arr)/sizeof(arr[0]);
    int end = size_of_arr;
    // ? time complexity 0(n^2)

    // for (size_t i = 0; i < size_of_arr; i++)
    // {
    //     if(arr[i] == 0){
    //         // delete the value and push the values back
    //         for (size_t j = i; j < size_of_arr; j++)
    //         {
    //             /* code */
    //             arr[j] = arr[j+1];
    //         }
    //         arr[end] = 0;
    //         end--;
    //     }
    // }

    // ? time complexity O(n)
    int count =0;

    for (size_t i = 0; i < size_of_arr; i++)

    {
        // check if 
        if (arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;

        }
    }
    
    // for traversing the array 
    for (size_t i = 0; i < size_of_arr; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
