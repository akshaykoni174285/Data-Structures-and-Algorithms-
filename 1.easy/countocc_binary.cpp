#include <iostream>

using namespace std;
int FindFirst(int arr[],int target, int n){
    int min =0;
    int max = n-1;
    while(min<=max){
        int mid = (min+max)/2;

        if(arr[mid] > target){
            max = mid-1;
        }
        else if(arr[mid] < target){
            min = mid+1;
        }
        else{
            if(mid == 0 || arr[mid-1] != arr[mid]){
                return mid;
            }
            else{
                max = mid-1;
            }
        }
    }
    return -1;
    }



int FindLast(int arr[],int target, int n){
    int min =0;
    int max = n-1;
    while(min<=max){
        int mid = (min+max)/2;

        if(arr[mid] > target){
            max = mid-1;
        }
        else if(arr[mid] < target){
            min = mid+1;
        }
        else{
            if(mid == n-1 || arr[mid+1] != arr[mid]){
                return mid;
            }
            else{
                min = mid+1;
            }
        }
    }
    return -1;


}

int BinarySearch(int arr[], int target,int n){

    int first = FindFirst(arr, target,n);
    if(first == -1){
        return 0;
    }
    else{
        return (first - FindLast(arr, target,n)) + 1;
    }
    
}


int main(int argc, char const *argv[])
{
    int arr[] = {10,20,20,20,30,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 20;
    int res = BinarySearch(arr, target, n);
    cout<<res<<endl;
    return 0;
}
