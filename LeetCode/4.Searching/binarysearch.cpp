#include <iostream>

using namespace std;


int BinarySearch(int arr[],int x,int low, int high){
    

    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(x > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int nums[] = {0,1,2,3,4,5,6};
    int target = 2;
    int size = sizeof(nums)/sizeof(nums[0]);
    int res = BinarySearch(nums, target,0,size-1);
    cout<<res<<endl;

    return 0;
}
