#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,10,3,4,19};
    int i = 0;
    int j = 1;
    int k=2;
    int biggest = INT_MIN;
    int secondb = INT_MIN;
    int smallest = INT_MAX;
    while(k<nums.size()){
        if(nums[i]>biggest){
            biggest = nums[i];
        }
        if(nums[k] > secondb){
            secondb = nums[k];
        }
        smallest = min(smallest,nums[j]);
        i++; j++; k++;

    }
    cout<<biggest<<endl;
    cout<<secondb<<endl;
    cout<<smallest<<endl;
    return 0;
}
