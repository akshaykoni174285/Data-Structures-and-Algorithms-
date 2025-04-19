#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to print the tree (Optional, for testing)
void printTree(TreeNode* root) {
    if (root == NULL) {
        cout << "NULL ";
        return;
    }
    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

// Function to initialize a simple tree (for testing)
TreeNode* buildTree() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    return root;
}

// Function to find the Lowest Common Ancestor (LCA)
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    // Your solution will go here
    if(root == nullptr) return nullptr;

    TreeNode* left = lowestCommonAncestor(root->left,p,q);

    TreeNode* right = lowestCommonAncestor(root->right,p,q);

    
}



// Main function to run the code
int main() {
    // Build the tree
    TreeNode* root = buildTree();
    
    // Example nodes to find LCA for
    TreeNode* p = root->left;  // Node with value 5
    TreeNode* q = root->left->right->right;  // Node with value 4
    
    // Print tree (Optional)
    cout << "Tree (Pre-order): ";
    printTree(root);
    cout << endl;
    
    // Call the function and print the result (to be completed)
    // TreeNode* lca = lowestCommonAncestor(root, p, q);

    TreeNode* result = lowestCommonAncestor(root,p,q);

    
    // if (lca != NULL) {
    //     cout << "Lowest Common Ancestor: " << lca->val << endl;
    // } else {
    //     cout << "No common ancestor found." << endl;
    // }
    
    return 0;
}
