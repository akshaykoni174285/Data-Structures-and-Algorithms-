#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,4,5};

    int res[] = {};

    int arr1_size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2_size = sizeof(arr2) / sizeof(arr2[0]);
    int ptr1 = 0;
    int ptr2 = 0;

    int final_size = arr1_size > arr2_size ? arr1_size : arr2_size;

    for (int i = 0; i < final_size; i++)
    {
        /* code */
        

    }
    

    return 0;
}
