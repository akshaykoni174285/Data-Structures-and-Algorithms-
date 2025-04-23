#include <iostream>
#include <algorithm>

#include <vector>

using namespace std;

void dfs(int i,int target,vector<int> &nums,vector<vector<int>>& result,vector<int>&curr){
    if(target == 0){
        result.push_back(curr);
        return;
    }
    if(i == nums.size() || target<0){
        return;
    }

    curr.push_back(nums[i]);
    dfs(i,target-nums[i],nums,result,curr);

    curr.pop_back();
    dfs(i+1,target,nums,result,curr);

    
}


void dfs_optimized(int i,vector<int> curr,int sum,int target,vector<int>&nums,vector<vector<int>> &result){
if(target == sum){
    result.push_back(curr);
    return;
}
for(int j=i;j<nums.size();j++){
    if(sum + nums[j]>target){
        return;
    }
    curr.push_back(nums[j]);
    dfs_optimized(j,curr,sum+nums[j],target,nums,result);
    curr.pop_back();
}


}
vector<vector<int>> combinations(vector<int>nums,int target){
    vector<vector<int>> result;
    // vector<int> curr;
    // dfs(0,target,nums,result,curr);

    sort(nums.begin(),nums.end());
    dfs_optimized(0,{},0,target,nums,result);
    return result;
}

int main(int argc, const char** argv) {
    vector<int> nums = {2,3,6,7};
    int target = 7;
    vector<vector<int>> resu = combinations(nums,target);

    for(auto res:resu){
        for(auto x:res){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}