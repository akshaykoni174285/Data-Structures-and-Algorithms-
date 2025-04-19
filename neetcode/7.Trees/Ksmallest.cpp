#include <iostream>
#include <stack>

#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(3);
    root->left->left = new TreeNode(2);

    root->right = new TreeNode(5);

    return root;
}

int Ksmallest_rec(TreeNode* root, int &k) {  // Pass `k` by reference
    if (root == nullptr) return 0;

    // Traverse left subtree
    int left = Ksmallest_rec(root->left, k);
    if (k == 0) return left;  // If we have found the kth smallest in left subtree, return it

    // Decrement k after visiting the current node
    k--;

    // If k reaches 0, return the current node's value
    if (k == 0) return root->val;

    // Traverse right subtree
    return Ksmallest_rec(root->right, k);
}



void Ksmallest(TreeNode* root, int k){
    stack<TreeNode*> stack;
    TreeNode* curr = root;

    while (curr || !stack.empty()) {
        while (curr != nullptr) {
            stack.push(curr);
            curr = curr->left;
        }

        TreeNode* node = stack.top();
        stack.pop();

        k--;
        if (k == 0) {
            cout << node->val << endl;
            return; // or break if you want to do something later
        }

        curr = node->right;
    }
}

int main(int argc, char const *argv[])
{
    int k=3;
    TreeNode* root = buildTree();
    // Ksmallest(root,k);
    cout<<Ksmallest_rec(root,k);
    return 0;
}
