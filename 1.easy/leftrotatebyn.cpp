#include <iostream>

using namespace std;

void reverse(int arr[], int left, int right ){
    // swap the two values between right and left
    // left ++ 
    // right --
    while(left < right){
        // swap
        int temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
        ++left;
        ++right;
    }   
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6};
    int d = 3;
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    // int res[size_arr];
    // int counter = 0;
    // cout << "the len of arry is " << size_arr << endl;


    // * this one solves in theta(n) and auxaliry space complex in theta(1)

    // reverse first to d elements
    reverse(arr, 0, d-1);
    reverse(arr, d,size_arr-1);
    reverse(arr,0,size_arr-1);
    // then reverse d to n-1 elements
    // and then reverse whole elements



    // cin >> d;

    // * this take theta(n) space complexity is theta(arr)
    // for (size_t i = d; i < size_arr; i++)
    // {
    //     /* code */
    //     res[counter] = arr[i];
    //     counter++;
    // }
    // for (size_t i = 0; i < d; i++)
    // {
    //     /* code */
    //     res[counter] = arr[i];
    //     counter++;
    // }
    // // ?for traversing the arry of res

    for (size_t i = 0; i < size_arr; i++)
    {
        cout<<arr[i]<<endl;
        /* code */
    }
    return 0;
}
