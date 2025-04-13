#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;  // Fix: Handle empty case

    unordered_set<int> myset(nums.begin(), nums.end());
    int res = 0; 

    for (int x : myset) {
        if (myset.find(x - 1) == myset.end()) {  // Start of a sequence
            int j = 1;
            while (myset.find(x + j) != myset.end()) {
                j++;
            }
            res = max(res, j);
        }
    }
    return res;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2, 300, 5};
    cout << longestConsecutive(nums) << endl;
    return 0;
}
