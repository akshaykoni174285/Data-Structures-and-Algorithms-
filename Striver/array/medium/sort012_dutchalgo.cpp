#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {2,0,2,1,1,0};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int mid = 0;
    int high = size_arr-1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (size_t i = 0; i < size_arr; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    
    
    
    return 0;
}
