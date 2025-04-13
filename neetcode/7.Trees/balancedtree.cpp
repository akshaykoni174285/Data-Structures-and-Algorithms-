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

int Height(TreeNode* root){
    if(root == nullptr) return 0;
    return 1 + max(Height(root->left),Height(root->right));
}

bool IsBalancedTree(TreeNode* root){
    if(root !=nullptr) return true;

    int lheight = Height(root->left);
    int rheight = Height(root->right);
    if (abs(lheight-rheight) > 1) return false;
    return IsBalancedTree(root->left) && IsBalancedTree(root->right);


}


int main() {
    TreeNode* root = createSampleTree();

    bool flag = IsBalancedTree(root);
    cout<<flag<<endl;
    return 0;
}
