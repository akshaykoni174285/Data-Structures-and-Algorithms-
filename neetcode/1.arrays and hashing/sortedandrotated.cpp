#include<iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> nums = {3, 4, 5, 1, 2};
    int c = 0;
    
   for (int i = 0; i < nums.size(); i++)
   {
        if(nums[i] < nums[i+1 % nums.size()]){
            c++;
        }
   }
   if(c<=1) cout<<"sorted and rotated";
   else cout<<"not sorted and rotated";
   
    return 0;
}
