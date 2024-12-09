#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {1,0,0};
    int j = -1;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    for (int i; i<arr_size;i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j==-1){
        cout<<"no zeros"<<endl;
    }

    for (size_t k = j+1; k< arr_size; k++)
    {   
        if(arr[k]!=0){
            swap(arr[k],arr[j]);
            j++; 
        }

        /* code */
    }

    for (size_t i = 0; i < arr_size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
