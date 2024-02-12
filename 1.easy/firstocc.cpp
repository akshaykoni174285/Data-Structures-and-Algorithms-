#include <iostream>

using namespace std;


int BinarySearch(int arr[],int target,int n){
    int max = n-1;
    int min = 0;
    
    
    while(min<=max){
        int m = (min+max)/2;
        if(arr[m] > target){
            max = m-1;
            
        }
        else if(arr[m] < target){
            min = m+1;
        }
        else{
            if(m == 0 || arr[m-1] != arr[m]){
                return m;
            }
            else{
                max = m-1;
            }
        }
    }
    return -1;

}

int main(int argc, char const *argv[])
{
    int arr[] = {1,10,10,10,20,20,40};
    int target = 20;
    int n =sizeof(arr)/sizeof(arr[0]);
    int res = BinarySearch(arr,target,n);
    cout<<res<<endl;
    return 0;
}
