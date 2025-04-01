#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> nums = {3,4,5,0,1,2};

    int target = 4;
    int l = 0;
    int r = nums.size()-1;
    while (l<=r)
    {
        int mid = l + (r-l)/2;
        if (target == nums[mid]){
            cout<<mid<<endl;
            exit(0);
        }

        if(nums[l]<=nums[mid]){
            if(nums[l]<=target && target<nums[mid]){
                r = mid-1;
            }
            else{
                l = mid+1;
            }

        }
        else{
            if(nums[mid]<target && target<=nums[r]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

    }
    

    return 0;
}
