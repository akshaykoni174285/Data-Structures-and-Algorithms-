#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* createSampleTree() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(20);
    return root;
}

TreeNode* createSubTree() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    return root;
}

bool isSame(TreeNode* root, TreeNode* subroot) {
    if (root == nullptr && subroot == nullptr) return true;
    if (root == nullptr || subroot == nullptr) return false;
    if (root->val != subroot->val) return false;
    return isSame(root->left, subroot->left) && isSame(root->right, subroot->right);
}



bool Subtree(TreeNode* root, TreeNode* subroot) {
    if(subroot == nullptr) return true;
    if(root == nullptr) return false;

    if(isSame(root,subroot)){
        return true;
    }
    return Subtree(root->left,subroot) || Subtree(root->right,subroot);
}

int main() {
    TreeNode* root = createSampleTree();
    TreeNode* subroot = createSubTree();
    
    bool flag = Subtree(root, subroot);
    
    if (flag) {
        cout << "Subtree found!" << endl;
    } else {
        cout << "Subtree not found." << endl;
    }

    return 0;
}
