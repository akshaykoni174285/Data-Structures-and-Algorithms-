#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(int argc, const char** argv) {

    vector<int> nums = {30,38,30,36,35,40,28};
    stack<int> mystack;
    vector<int> result(nums.size(),0);
    for (int i = 0; i < nums.size(); i++)
    {
        while(!mystack.empty() && nums[i] > nums[mystack.top()]) {
            int prevIndex = mystack.top();
            mystack.pop();
            result[i] = i-prevIndex
        }

        mystack.push(i);
    }
    return 0;
}