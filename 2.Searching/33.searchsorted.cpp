#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int Search(vector<int> nums, int target){
    int right = nums.size();
    int left = 0;
    while(left<=right){
        // normal binary search method
        int mid = (left+right)/2;
        if(target == nums[mid]){
            return mid;
        }
        // left side sorted
        else if(nums[mid] > nums[left]){
            if(target>=nums[left] && target<nums[mid]){
                right = mid-1;
        }
        else{
            left = mid+1;
        }


    }
    else{
        if(target>nums[mid] && target<=nums[right]){
                left = mid+1;
        }
        else{
            right =mid-1;
        }

    }
}
return -1;
}
int main(int argc, char const *argv[])
{
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int res = Search(nums, target);
    cout<<res<<endl;
    return 0;
}
