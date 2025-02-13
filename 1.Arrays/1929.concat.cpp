#include <iostream>
#include <vector>
using namespace std;



int main(int argc, const char** argv) {
    vector<int> nums = {0,1,2};
    nums.insert(nums.end(), nums.begin(), nums.end());

    // inserting in vector is pos and the beginning and end of the vector 
    
    for (size_t i = 0; i < nums.size(); i++) {
        cout<< nums[i]<<endl;

    }

    
    
    
    return 0;
}