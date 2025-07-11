// #this is to find the majority of the element in the array

#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> nums = {5,3,4,5,5,7,7,7,7,7,7};

    int element = nums[0];
    int count = 1;

    for (size_t i = 1; i < nums.size(); i++)
    {   if(count == 0){
            element = nums[i];
            count = 1;
        }
        if(nums[i]!=element) count--;
        else count++;
        
    }
    
    cout<<element<<endl;
    return 0;
}
