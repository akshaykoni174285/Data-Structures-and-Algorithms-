#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr_1[] = {10,15,20};
    int arr_2[] = {5,6,6,15};
    int res[]={};
    int arr_1_size = sizeof(arr_1)/sizeof(arr_1[0]);
    int arr_2_size = sizeof(arr_2)/sizeof(arr_2[0]);
    int ptr1=0;
    int ptr2=0;
    int resptr = 0;

    while (ptr1 < arr_1_size && ptr2 < arr_2_size)
    {
        /* code */
        if (arr_1[ptr1] > arr_2[ptr2]){
            cout<< arr_2[ptr2]<<endl;
            ptr2++;

        }
        else{
            cout<< arr_1[ptr1]<<endl;
            ptr1++;
        }

    }
    

    
      

    return 0;
}
