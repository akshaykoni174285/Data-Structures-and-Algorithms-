#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool duplicate(vector<int> nums,int k){
    unordered_set<int> map;
    for(int i=0;i<nums.size();i++){
        if(map.count(nums[i])) return true;
        map.insert(nums[i]);

        if(map.size()>k){
            map.erase(nums[i-k]);
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,1,2,3};
    int k= 2;
    bool result = duplicate(nums,k);
    result ? cout<<"true" : cout<<"false";
    return 0;
}
