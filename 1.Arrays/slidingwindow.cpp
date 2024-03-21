#include <iostream>
#include <string>
#include <vector>

using namespace std;


int SlidingWindow(vector<int> arr, int k){
    int maxi = 0;
    int arr_size = arr.size();
    for (int i = 0; i < k; i++)
    {
        maxi  = maxi + arr[i];
    } 
    int res = maxi;// after this loop the max is 39
    for (int i = k; i<arr_size; i++)
    {
        /* code */
        maxi = maxi + arr[i]-arr[i-k];
        res = max(res,maxi);

    }
    return res;
    
    
}


int main(int argc, char const *argv[])
{
    vector<int> arr = {1,8,30,-5,20,7};
    int k = 3;
    int res = SlidingWindow(arr,k);
    cout<<"the res is "<<res<<endl;
    return 0;
}