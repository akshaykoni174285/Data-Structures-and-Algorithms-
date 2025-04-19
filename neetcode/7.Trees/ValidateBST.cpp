#include <iostream>
#include <climits>
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
    root->left = new TreeNode(1);
    root->right = new TreeNode(5);

    return root;
}

// Function to find the Lowest Common Ancestor (LCA)
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    // Your solution will go here
    if(root == nullptr) return nullptr;

    TreeNode* left = lowestCommonAncestor(root->left,p,q);

    TreeNode* right = lowestCommonAncestor(root->right,p,q);

    
}

bool ValidateBST(TreeNode* root, TreeNode* minNode,TreeNode* maxNode){
    if(root == nullptr) return true;

    if(minNode && root->val<= minNode->val)return false;
    if(maxNode && root->val >= maxNode->val) return false;
    // if(root->val > min_val && root->val < max_val) return true;
    // else return false;



    return ValidateBST(root->left,minNode,root) && ValidateBST(root->right,root,maxNode);
}


// Main function to run the code
int main() {
    // Build the tree
    TreeNode* root = buildTree();
    bool IsValid = ValidateBST(root,nullptr,nullptr);
    cout<<IsValid<<endl;

    
    // // Example nodes to find LCA for
    // TreeNode* p = root->left;  // Node with value 5
    // TreeNode* q = root->left->right->right;  // Node with value 4
    
    // Print tree (Optional)
    // cout << "Tree (Pre-order): ";
    // printTree(root);
    // cout << endl;
    
    // Call the function and print the result (to be completed)
    // TreeNode* lca = lowestCommonAncestor(root, p, q);

    // TreeNode* result = lowestCommonAncestor(root,p,q);


    return 0;
}
