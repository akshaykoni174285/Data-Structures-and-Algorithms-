#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {7, 2, 3, 4};
    int n = nums.size();
    
    vector<int> prefix(n, 1);
    vector<int> postfix(n, 1);
    vector<int> result(n, 1);

    // Compute prefix product
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Compute postfix product
    for (int i = n - 2; i >= 0; i--) {
        postfix[i] = postfix[i + 1] * nums[i + 1];
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

    // Compute result (Product Except Self)
    for (int i = 0; i < n; i++) {
        result[i] = prefix[i] * postfix[i];
    }

    // Print final result
    cout << "Result: ";
    for (auto r : result) {
        cout << r << " ";
    }
    cout << endl;

    return 0;
}
