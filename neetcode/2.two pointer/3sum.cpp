#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {-1,0,1,2,-1,-4};

    vector<vector<int> > res;
    int num_size = nums.size();
    sort(nums.begin(), nums.end());

 
    for (int i = 0; i < num_size-2; i++)
    {
        if(i>0 && nums[i] == nums[i-1]) continue;
        int left = i+1;
        int right = nums.size()-1;
        while (left < right)

        {
            if (nums[i] + nums[left] + nums[right] > 0)
            {
                right--;
            }
            else if(nums[i] + nums[left] + nums[right]<0)
            {
                /* code */
                left++;
            }
            else {
                res.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) left++;

                // Skip duplicate right values
                while (left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            }
            
        }
        
    }

    for(auto re: res){
        for(auto val:re){
            cout<<val<<" ";
        }
        cout<<endl;
    }


    

    return 0;
}
