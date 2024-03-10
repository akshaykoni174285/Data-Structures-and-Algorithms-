#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    vector<int> res = {};
    int checker = nums[0];
    res.push_back(checker);
    for (size_t i = 1; i < nums.size(); i++)
    {
        /* code */
        if (nums[i] == checker){
            continue;
        }
        else{
            res.push_back(nums[i]);
            checker = nums[i];
        }
        
    }
    
    
     /* code */
    
    for (size_t i = 0; i < res.size(); i++)
    {
        /* code */
        cout<<res[i]<<endl;
    }
    // cout<<k<<endl;
    
    return 0;
}
