#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {13,46,24,52,20,9};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=arr_size-2; i++){
        int mini = i;
        for(int j = i+1; j<arr_size; j++) {
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }

    for(int i=0; i<arr_size;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
