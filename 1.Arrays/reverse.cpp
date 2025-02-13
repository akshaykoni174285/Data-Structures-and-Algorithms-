#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    while(i<size_arr/2){
        int temp = arr[i];
        arr[i] = arr[size_arr-i-1];
        arr[size_arr-i-1] = temp;
        i++;
    }
    for (size_t i = 0; i < size_arr; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
