#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    int nums_size = nums.size();

    // first reverse from 0 to nums.size()-k
    // second reverse from k to last nums
    // at last reverse all 
    reverse(nums.begin(),nums.begin() + (nums.size() - k));
    reverse(nums.begin()+(nums.size() - k),nums.end());
    reverse(nums.begin(),nums.end());

    for(auto x:nums) {
        cout<<x<<endl;
    }
    return 0;
}
