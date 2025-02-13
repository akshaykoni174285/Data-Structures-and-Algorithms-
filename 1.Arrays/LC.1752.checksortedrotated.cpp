#include <iostream>
#include <vector>

using namespace std;

bool CheckSortRot(vector<int> arr){
    int arr_size = arr.size();
    int life = 1;

    for (size_t i = 0; i < arr_size-1; i++)
    {
        if(arr[i+1] > arr[i]){
            continue;
        }
        else if(arr[i+1] < arr[i] && life == 1){
            life--;
            continue;
        }
        else if(arr[i]<arr[0] && arr[i+1] > arr[i]){
            continue;
        }
        else{
            return false;

        }
    }
    return true;
    
    
    
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {2,1,3,4};
    bool res = CheckSortRot(arr);
    cout<<res<<endl;
    return 0;
}
