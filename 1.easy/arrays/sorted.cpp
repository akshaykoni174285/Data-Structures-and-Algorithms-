#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {5,10,20,20};
    bool flag = false;
    int num = 0;
    for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0])-1; i++)
    {
        if(arr[i+1] >= arr[i]){
            flag = true;
            
        }
        else{
            flag=false;
            break;
        }
    }
    if (flag)
    {
        cout<<"the array is sorted"<<endl;
    }
    else
    {
       cout<< "the array is not sorted"<<endl;
    }
    
    return 0;
}
