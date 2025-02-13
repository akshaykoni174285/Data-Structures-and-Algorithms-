#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5};
    // int arr[] = {1,2,3};
    
    // first find the seize of the array 
    int size = sizeof(arr)/sizeof(arr[0]);
    int middle = (size%2 == 0) ? size/2 : (size-1)/2;

    for (size_t i = 0; i < middle; i++)
    {
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[size - i-1];
        arr[size - i-1] = temp;
    }
    //? traversing the array

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i]<<endl;
    }
    


    return 0;
}
