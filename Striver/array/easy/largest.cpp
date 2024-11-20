#include <iostream>
#include <climits>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {4,5,1,2,3};
    int greatest = INT_MIN;
    int second_greatest = INT_MIN;  
    int size_arr = sizeof(arr)/sizeof(arr[0]);

    if(size_arr<2){
        cout<<"not enought values to check"<<endl;
    }
    for (size_t i = 0; i < size_arr; i++)
    {
        if(arr[i] > greatest){
            second_greatest = greatest;
            greatest = arr[i];
        }
        else if(arr[i] > second_greatest && arr[i]!=greatest){
            second_greatest = arr[i];
        }

    }

    cout<<"second gratest value is "<<second_greatest<<endl;



    
    
    return 0;
}

