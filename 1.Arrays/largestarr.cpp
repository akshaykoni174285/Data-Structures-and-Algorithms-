#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {0,0,0,0};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int largest = 0;

    for (size_t i = 0; i < arr_size; i++)
    {
        if(arr[i] > largest)
        largest = arr[i];
    }
    cout<<"the largest element is "<<largest<<endl;
    

    // cout<<arr_size<<endl;
    return 0;
}
