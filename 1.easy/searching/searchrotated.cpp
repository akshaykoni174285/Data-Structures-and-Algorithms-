#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int FindVal(int arr[],int target){
    int right = sizeof(arr)/sizeof(arr[0])-1;
    int left = 0; 
    while (left<=right) {
        int mid = (left+right)/2;
        if (arr[mid] > arr[right]){
            right = mid-1;
        }
        else if (arr[mid] < arr[right]){
            left = mid+1;
        }
        else{
            return mid;
        }

    }
    return -1;
    
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {100,200,500,1000,2000,10,20};
    int target = 200;

    int res = FindVal(arr, target);
    cout<<res;
    return 0;
}
