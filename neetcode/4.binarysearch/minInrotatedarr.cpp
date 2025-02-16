#include <iostream>
#include <vector>

using namespace std;


int findMin(vector<int> nums){
    if (nums.empty()) return -1;
    int res = nums[0];
    int l = 0;
    int r = nums.size()-1;

    while(l<=r){
        // handles no rotate and return the first element in sorted array
        if (nums[l] < nums[r]) {
            res = min(res, nums[l]);
            break;
        }
        // if its rotated then keep the track of the min elemment 
        int mid = l+ (r-l) / 2;
        res = min(res, nums[mid]);
        if (nums[l] <= nums[mid]) l = mid+1;
        else r = mid-1;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {3,4,5,6,1,2};
    int target = 1;
    

    int min = findMin(nums);
    cout<<min<<endl;
    return 0;
}
