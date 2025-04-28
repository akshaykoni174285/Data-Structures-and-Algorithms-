#include<iostream>
#include<vector>

using namespace std;


void dfs(vector<int> cur,vector<vector<int>> &result,vector<int> &nums,vector<bool> &used){
    if(cur.size() == nums.size()){
        result.push_back(cur);
        return;
    }

    for (int j = 0; j < nums.size(); j++)
    {
        if(used[j]) continue;
        used[j] = true;
        cur.push_back(nums[j]);
       
        dfs(cur,result,nums,used);
        used[j] = false;
        cur.pop_back();


    }
    

}

vector<vector<int>> Combination(vector<int> &nums){

    vector<vector<int>> result;
    vector<bool> used(nums.size(),false);
    dfs({},result,nums,used);
    return result;
}


int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,4};
    vector<vector<int>> result = Combination(nums);

    for(auto res:result){
        for(auto r:res){
            cout<<r<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
