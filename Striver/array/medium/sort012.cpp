#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {2,0,2,1,1,0};

    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int count_zero = 0;
    int count_one = 0;
    int count_two = 0;

    for (size_t i = 0; i < arr_size; i++)
    {
        /* code */
        if(arr[i] == 0) count_zero++;
        if(arr[i] == 1) count_one++;
        else count_two++;

    }
    cout<<count_zero<<count_one<<count_two<<endl;
    for(int i = 0; i < count_zero; i++) arr[i] = 0;
    for(int i = count_zero; i < count_zero + count_one; i++) arr[i] = 1;
    for(int k = count_one+count_zero; k < arr_size; k++) arr[k] = 2;

    for (size_t i = 0; i < arr_size; i++)
    {
        /* code */
        cout<< arr[i]<<" ";
    }
    
    
    return 0;
}
