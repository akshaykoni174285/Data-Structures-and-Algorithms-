#include<iostream>
using namespace std;

// int largest(int arr[], int size) {
//     int l = 0;
//     for (size_t i = 0; i < size; i++)
//     {
//         if (arr[i] > l){
//             l = arr[i];
//         }
//     }

//     return l;    
// }

int main(int argc, char const *argv[])
{
    // int arr[] = {5,20,12,20,10,16};
    int arr[] = {10,10,10,10};
    //? find the second largest number 
    int size = sizeof(arr)/sizeof(arr[0]);
    // int larg = largest(arr,size);
    // cout<<larg<<endl;

    // int res = -1;

    // for (size_t i = 0; i < size; i++)
    // {
    //     if(arr[i]!=larg){
    //         if(res == -1){
    //             res = arr[i];
    //         }
    //         else if (arr[i] > res) {
    //             res = arr[i];
    //         }
    //     }
    // }
    // ? finding the second largest in a O(n)
    int largest = -1;
    int second_l = -1;

    for (size_t i = 0; i < size; i++)
    {
        if(arr[i] > largest){
            if(largest>second_l){
                second_l = largest;
                largest = arr[i];
            }
        }
        else{
            if(second_l < arr[i] && largest!=arr[i]){
                second_l = arr[i];

            }
        }
    }
    cout<< second_l<<endl;

    // cout<<res<<endl;
    

    return 0;
}
