#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int BinarySearch(int arr[],int left,int right,int target){
    while(left<=right){
        int mid = (right+left)/2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target > arr[mid]){
            left = mid +1;
        }
        else{
            right = mid -1;
        }


    }
    return -1;
}

int BinarySearchRecc(int arr[],int left,int right,int target){
    // base case
    if (left > right) return -1;
    while (left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == target) return mid;
        else if(target > arr[mid]){
            left = mid+1;
           return BinarySearch(arr,left,right,target);
        }
        else{
            right = mid-1;
            return BinarySearch(arr,left,right,target);
        }
    }
    
}



int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0]) -1;
    int target = 4;
    int res = BinarySearchRecc(arr, left, right, target);
    cout<<"target found in "<<res<<endl;


    return 0;
}
