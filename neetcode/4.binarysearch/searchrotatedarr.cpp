#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {3,4,5,6,1,2};
    int target=6;

    int l=0;
    int r = nums.size()-1;

    while(l<=r){
        int mid = (l+r) /2;

        if(target == nums[mid]) cout<<mid;
        if(nums[l]<=nums[mid]){
            if ( target < nums[l] || target > nums[mid] ){
                l = mid +1;
            }
            else{
                r = mid -1;
            }
        }
        else{
            if(target > nums[r] || target < nums[mid]){
                r = mid-1;

            }
            else{
                l = mid +1;
            }
        }


    }

    return 0;
}
