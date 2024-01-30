#include<iostream>
using namespace std;

int largest(int arr[], int size) {
    int l = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > l){
            l = arr[i];
        }
    }

    return l;    
}

int main(int argc, char const *argv[])
{
    int arr[] = {10,10,10};
    //? find the second largest number 
    int size = sizeof(arr)/sizeof(arr[0]);
    int larg = largest(arr,size);
    // cout<<larg<<endl;

    int res = -1;

    for (size_t i = 0; i < size; i++)
    {
        if(arr[i]!=larg){
            if(res == -1){
                res = arr[i];
            }
            else if (arr[i] > res) {
                res = arr[i];
            }
        }
    }
    cout<<res<<endl;
    

    return 0;
}
