#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {0,1,0,3,12};
    int count = 0;

    for (size_t i = 0; i < nums.size(); i++)
    {
        /* code */
        if(nums[i]!=0){
            swap(nums[i], nums[count]);
            count++;
        }
    }

    for (size_t i = 0; i < nums.size(); i++){
        cout<<nums[i]<<endl;
    }
    

    
    
    
    return 0;
}
