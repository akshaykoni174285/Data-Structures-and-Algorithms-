
#include <iostream>
#include <vector>


using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {1,3,4,5};
    int arr_size = 4;
    int pos = 1;
    int value = 2;

    // 1,3,4,5
    //? traversing the array
    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    
    // ? inserting the val in pos 

    for (size_t i = arr_size-1; i > pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;

    

   
    

    for (int i = 0; i < arr_size+1; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    

    return 0;
}
