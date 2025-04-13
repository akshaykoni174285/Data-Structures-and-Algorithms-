#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {8,8,6,6,6,4,6};
    if(nums.size() == 1) cout<<nums[0]<<endl;

    int majority = nums[0];
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == majority) count++;
        else{
            count--;
            if(count == 0){ majority = nums[i];
                count = 1;
            }
        }
    }
    cout<<majority<<endl;
    return 0;
}
