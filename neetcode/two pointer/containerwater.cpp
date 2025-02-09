#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,7,2,5,4,7,3,6};
    int left = 0;
    int right = nums.size()-1;
    int res = 0;

    while (left < right){
        int area = min(nums[left],nums[right]) * (right-left);
        res = max(res, area);

        if(nums[left]<=nums[right]){
            left++; 
        }
        else{
            right--;
        }
    }
    cout<<res<<endl;

    return 0;
}
