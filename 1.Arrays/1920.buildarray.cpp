/*
Input: nums = [0,2,1,5,3,4]
Output: [0,1,2,4,5,3]
Explanation: The array ans is built as follows: 
ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]
    = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]]
    = [0,1,2,4,5,3]
    */


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {0,2,1,5,3,4};
    vector<int> ans;
    for (size_t i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[nums[i]]);
    }
    for_each(ans.begin(),ans.end(), [](const int & i ){
        cout << i<<endl;
    }); //
    
    
    return 0;
}
