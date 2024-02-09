#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    // int arr[] = {2,3,-81,7,-1,2,3};
    // int arr[] = {5,8,3};
    int arr[] = {1,2,3,-4,-5,3,-5,3,2};
    
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int res = arr[0];
    int sum = 0;
    int maxending = arr[0];

    // a liner loop
    for (size_t i = 1; i < size_arr; i++)
    {
        /* code */
        maxending = max(maxending+arr[i], arr[i]);
        res = max(res,maxending);
       
        

    }
    cout<<res<<endl;
    
    return 0;
}
