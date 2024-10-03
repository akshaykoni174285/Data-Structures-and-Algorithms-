#include <iostream>
#include <unordered_map>
#include <vector>



using namespace std;

int main(int argc, char const *argv[])
{
    int target = 13;
    unordered_map<int, int> umap;
    vector<int> nums = {2,7,11,15};

    // create a hash table for nums

    for (size_t i = 0; i < nums.size(); i++)
    {
        umap[nums[i]] = i;
    }

    // print the hash table
    // for(auto it:umap){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    // find the complement value

    for(int i = 0; i< nums.size() ;i++){
        int complement = target - nums[i];
        
        if(umap.count(complement) && umap[complement] !=i){
             cout<<i<<" " << umap[complement]<<endl;
             exit(0);
        }
        

    }


    
    return 0;
}
