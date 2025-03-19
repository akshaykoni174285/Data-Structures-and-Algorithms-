#include <iostream>
#include <vector>


using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,4,5};
    int i = 1;
    int k =3;
    int temp = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] = nums[i] + nums[i-1];


    }

    for(auto x : nums){
        cout<<x<<endl;
    }
    if(i == 0){
        cout<<nums[k]<<endl;
    }
    else{
        cout<<nums[k] - nums[i-1]<<endl;
    }
    
    

    return 0;
}
