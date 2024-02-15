#include <iostream>

using namespace std;


int BinarySearch(int arr[], int n){
    int target = 1;
    int min = 0;
    int max = n-1;
    while (min<=max){
        int mid = (min+max)/2;

        if(arr[mid] != target){
            min = mid+1;
        }
        else{
            if (arr[mid] != arr[mid-1]){
                return mid;
            }
            else{
                max = mid-1;

            }

        }
    }
    return n;
}

int main(int argc, char const *argv[])
{
    int arr[]  ={0,0,0,0};

    int n = sizeof(arr)/sizeof(arr[0]);

    int res = BinarySearch(arr, n);
    cout<<n-res<<endl;

    return 0;
}
