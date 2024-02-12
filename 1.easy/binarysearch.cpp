#include <iostream>


using namespace std;

// int BinarySearch(int arr[], int target, int l,int r){
//     while(l<=r){
//         int m = (r+l)/2; 

//         if(arr[m] == target){
//             return m;
//         }
//         else if(arr[m]< target){
//             l = m+1;
//         }
//         else{
//             r=m-1;
//         }
//     }
//     return -1;
// }


int BinarySearchRec(int arr[], int target, int l, int r){

    if(l>r) return -1;
    while(l<=r){
        int m = (r+l)/2; 

        if(arr[m] < target){
            return BinarySearchRec(arr, target,m+1,r);
        }
        else if(arr[m]> target){
           
            return BinarySearchRec(arr, target, l,m-1);
            
        }
        else{
            if(m==0 || arr[m-1]!=arr[m]){
                return m;
            }
            else{
                return BinarySearchRec(arr, target, l,m-1);

            }
        }
    }


}

int main(int argc, char const *argv[])
{
    int arr[] = {5,5,5};
    int target = 5;
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]) - 1;
    // int res = BinarySearch(arr, target, l, r);
    int res = BinarySearchRec(arr, target, l, r);
    cout<<"found in " <<res<<endl;

    
    
    

    return 0;
}
