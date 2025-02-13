#include <iostream>

#include <vector>


using namespace std;


int Binsearch(vector<int>nums,int target) {
    int size = nums.size();

    int l = 0;
    int r = size -1;
    while(l <= r){
        int mid = (l + r) /2;

        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid]>target){
            r = mid-1;
        }
        else if(nums[mid]<target){
            l = mid +1;
        }
    }
    return -1;

}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,6,7,8,9,10};
    int target =7;

    int ind = Binsearch(nums, target);
    cout<<"found at this index :"<<ind<<endl;
    return 0;
}
