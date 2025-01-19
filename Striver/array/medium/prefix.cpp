#include <iostream>
#include <vector>


using namespace std;

int getSum(int l, int r, vector<int> prefix){
    return prefix[r] - prefix[l-1];
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {2,8,3,9,6,5,4};
    vector<int> prefix;
    int sum = 0;

    // int arr[] = {2,8,3,9,6,5,4};
    // int size_arr = sizeof(arr)/sizeof(arr[0]);
    for(auto x:arr) {
        sum = sum + x;
        prefix.push_back(sum);        
    }

    // for(auto i:prefix){
    //     cout<<i<<endl;
    // }

    cout<<getSum(0,2,prefix)<<endl;

    return 0;
}
