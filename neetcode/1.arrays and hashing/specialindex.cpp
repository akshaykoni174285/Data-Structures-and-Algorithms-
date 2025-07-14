#include <iostream>
#include <vector>


using namespace std;


int specialTriplets(vector<int>& nums){
    int result = 0;
    for(int i=0;i<nums.size()-2;i++){
        for(int j=i+1;j<nums.size()-1;j++){
            for(int k=j+1;k<nums.size();k++){
                if(nums[i] == nums[j] *2 && nums[k] == nums[j]*2){
                    result++;
                }
            }
        }
    }
    return result;
}


int main(int argc, char const *argv[])
{
    vector<int> nums = {8,4,2,8,4};
    int result = specialTriplets(nums);
    cout<<"result is "<<result<<endl;
    return 0;
}
