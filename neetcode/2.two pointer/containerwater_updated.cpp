#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,7,2,5,4,7,3,6};\
    int l = 0;
    int r = nums.size()-1;
    int res = 0;
    while (l<r)
    {
        int area = min(nums[l], nums[r]) * (r-l);
        res = max(area,res);

        if(nums[l] <= nums[r]){
            l++;
        }
        else{
            r--;
        }
    }
    cout << "The maximum water that can be trapped is: " << res << endl;
    
    return 0;
}
