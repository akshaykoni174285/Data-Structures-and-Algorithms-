#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    void topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        for (auto i : nums) umap[i]++;

        vector<vector<int>> bucket(nums.size() + 1);
        for (auto& pair : umap) {
            bucket[pair.second].push_back(pair.first);
        }

        vector<int> res;
        for (int i = nums.size(); i >= 0; i--) {
            for (auto num : bucket[i]) {
                res.push_back(num);
                if (res.size() == k) {
                    // Print the result
                    for (int n : res) {
                        cout << n << " ";
                    }
                    cout << endl;
                    return;  
                }
            }
        }
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    Solution sol;
    sol.topKFrequent(nums, k);
    return 0;
}
