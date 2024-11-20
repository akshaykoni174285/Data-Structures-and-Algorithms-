#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2,1,2,3,4,5,6};

    int size_arr = sizeof(arr)/sizeof(arr[0]);
    for (size_t i = 0; i < size_arr-1; i++)
    {
        /* code */
        if(arr[i] > arr[i+1]){
            cout<<"not sorted"<<endl;
            exit(1);
        }
        else{
        }

    }
    cout<<"sorted the array"<<endl;
    
    return 0;
}
