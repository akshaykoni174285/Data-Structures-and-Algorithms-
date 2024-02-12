#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int checking =nums[0];
    int count = 0;
    int k = 0;
    for (int i = 1; i < nums.size(); i++)
    {  /* code */
        if(checking == nums[i]){
            nums[i] = 0;

        }
        else{
            k++;
            checking = nums[i];
        }
    
    }
    for (size_t i = 0; i < nums.size(); i++)
    {
        if(nums[i] != 0){
            swap(nums[i],nums[count]);
            count++;
        }
        
        /* code */
    }
    for (size_t i = 0; i < nums.size(); i++)
    {
        /* code */
        cout<<nums[i]<<endl;
    }
    cout<<k<<endl;
    
    return 0;
}
