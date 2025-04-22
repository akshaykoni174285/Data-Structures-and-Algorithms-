#include <iostream>
#include <vector>


using namespace std;


void dfs(vector<int> & nums,int i,vector<int>& subset, vector<vector<int>> &res){
    // base case
    if(i>=nums.size()){
        res.push_back(subset);
        return;

    }

    subset.push_back(nums[i]);
    dfs(nums,i+1,subset,res);
    subset.pop_back();
    dfs(nums,i+1,subset,res);
}

vector<vector<int>> Subset(vector<int> &nums){
    vector<vector<int>> res;
    vector<int> subset;
    dfs(nums,0,subset,res);
    return res;

}


int main(int argc, char const *argv[])
{
    vector<int> subset;
    vector<int> nums = {1,2,3};
    vector<vector<int>> result;

    vector<vector<int>> res = Subset(nums);

    for(auto x:res){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
