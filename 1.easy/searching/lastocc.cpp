#include <iostream>

using namespace std;


int BinarySearch(int arr[], int target, int n){
    int min = 0;
    int max = n-1;
    while(min<=max){
        int mid = (min + max) / 2;
        if(arr[mid] > target){
            max = mid-1;
        }
        else if(arr[mid] < target){
            min = mid+1;
        }
        else{
            if(mid==n-1 || arr[mid]!=arr[mid+1]){
                return mid;
            }
            else{
                min = mid+1;
            }
        }
       

    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr[] = {5,8,8,10,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    int res = BinarySearch(arr,target,n);
    cout<<res<<endl;
    return 0;
}
