#include <iostream>
#include <vector>

using namespace std;


int search(vector<int> nums,int target){

    if(nums.size()==0) return -1;

    int l = 0;
    int r = nums.size()-1;
    while(l<=r){
        int mid = (l+r)/2;

        if(nums[mid]==target) return mid;
        if(nums[l] >= nums[mid]) l = mid+1;
        else r = mid-1;
    }
    return -1;

}
int main(int argc, char const *argv[])
{
    vector<int> nums = {3,4,5,6,1,2};
    int target = 1;

    int res = search(nums, target);
    cout<<"found the value at the index of "<<res<<endl;

    return 0;
}
