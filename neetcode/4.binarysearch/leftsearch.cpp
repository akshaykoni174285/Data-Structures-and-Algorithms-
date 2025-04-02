#include <iostream>
#include <vector>


using namespace std;


int BinaryLeftSer(vector<int>nums, int k){

    int l = 0;
    int res=  -1;
    int r = nums.size()-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(nums[mid] == k){
            res = mid;
            r = mid - 1;
        }
        else if(nums[mid]>k){
            r = mid -1;
        }
        else{
            l = mid + 1;
        }


    }
    return res;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,2,2,3,5};
    int target = 2;

    int res_ind = BinaryLeftSer(nums,target);

    cout<<res_ind<<endl;
    return 0;
}
