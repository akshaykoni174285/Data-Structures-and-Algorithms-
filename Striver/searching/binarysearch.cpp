#include <iostream>
#include <vector>

using namespace std;

int BinSearch(vector<int> nums,int target){
    int l = 0;
    int h = nums.size()-1;

    while(l<=h){
        int mid = (l + h) / 2;
        if(target == nums[mid]){
            return mid;
        }
        else if (target > nums[mid]){
            h = mid +1;
        }
        else{
            l = mid -1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    vector<int> nums = {10,20,30,40,50,60};
    int target = 10;
    int res = BinSearch(nums,target);  
    cout<<res<<endl;
    return 0;
}
