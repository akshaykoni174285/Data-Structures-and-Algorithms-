#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5};
    int num = 3;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i < arr_size; i++){
        if(arr[i] == num){
            cout<<"found at index "<< i+1 <<endl;
            break;
        }
    }
    return 0;
}
