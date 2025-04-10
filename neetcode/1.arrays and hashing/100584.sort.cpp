#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {5,2,3,1};
    
    while(true){
        bool sorted = false;
        int min_val = INT_MAX;
        int min_index = -1;

        for(int i=0; i<nums.size()-1; i++){
            int curr_sum = nums[i] + nums[i+1];
            if(curr_sum < min_val){
                min_val = curr_sum;
                min_index = i;
            }
        }
        if(min_index == -1) break;
        nums[min_index] = nums[min_index] + nums[min_index+1];
        nums.erase(nums.begin() + min_index + 1);


        sorted = true;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] > nums[i+1]){
                sorted = false;
                break;
            }
        }
        if(sorted) break;
    }

    for(auto x:nums){
        cout<<x<<" ";
    }

    return 0;
}
