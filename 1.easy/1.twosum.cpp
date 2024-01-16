
#include <iostream>
#include <vector>


using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {2,7,11,15};
    vector<int> ans;
    int target = 9;
    for (size_t i = 0; i < nums.size()-1; i++)
    {
        for (size_t j = i+1; j < nums.size(); j++){
            if (nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                


            }
        }
    }
    for(int x: ans){
        cout<<x<<endl;

    }
    


    return 0;
}
