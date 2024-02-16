#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6};
    int rear = arr[0];

    for (size_t i = 1; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        /* code */
        arr[i-1] = arr[i];
    }
    arr[sizeof(arr)/sizeof(arr[0]) - 1] = rear;
    
    // for traversing 

    for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i];
    }
    cout<<endl;
    
    return 0;
}
