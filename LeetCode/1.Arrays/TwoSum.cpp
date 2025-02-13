#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int nums[] = {2,7,11,15};
    int target = 17;
    int size = sizeof(nums)/sizeof(nums[0]);
    for (size_t i = 0; i < size-1; i++)
    {
        for (size_t j = i+1; j < size; j++)
        {
            if(nums[i] + nums[j] ==target ){
                cout<<nums[i]<<" "<<nums[j]<<endl;
            }
        }
        
    }
    
    return 0;
}
