#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>


using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int current_sum = 0;
    int max_sum = INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(current_sum + nums[i] > nums[i]){
            current_sum += nums[i];
        }
        else{
            current_sum = nums[i];
        }
        max_sum = max(max_sum,current_sum);
    }
    cout<<max_sum<<endl;
    return 0;
}
