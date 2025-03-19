#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    
    vector<int> prefix(n);
    vector<int> postfix(n);

    prefix[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i];
    }

    postfix[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        postfix[i] = postfix[i + 1] * nums[i];
    }

    // Print prefix and postfix arrays
    cout << "Prefix: ";
    for (auto x : prefix) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Postfix: ";
    for (auto y : postfix) {
        cout << y << " ";
    }
    cout << endl;

    return 0;
}
