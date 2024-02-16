#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid;
        
        while(low<=high){
            mid = (high+low)/2;
            if(nums[mid] == target){
                return mid;
            }

            if(nums[mid] > target){
                high = mid - 1;

            }
            else{
                low = mid +1;
            }

        }
        return low;
}

int main(int argc, char const *argv[])
{   
    vector<int> nums = {1,3,5,6};
    int target = 7;
    int res = searchInsert(nums, target);
    cout<<res<<endl;
    
    
    return 0;
}
