#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {23,1,10,5,2};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    for (size_t i = 1; i < size_arr; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j<=0 && arr[j]> key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
    return 0;
}
