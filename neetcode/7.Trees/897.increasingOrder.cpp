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

void increasingOrder(TreeNode* root,TreeNode* &result){
    if(root == nullptr) return;
    increasingOrder(root->left,result);
    result->left = nullptr;
    result->right = root;
    result = root;
    increasingOrder(root->right,result);

}

void preorderTraversal(TreeNode* root){
    if(root == nullptr)return;
    preorderTraversal(root->left);
    cout<<root->val<<endl;
    preorderTraversal(root->right);
}
int main() {
    TreeNode* root = createSampleTree();
    TreeNode* dummy = new TreeNode(0);  // dummy node
    TreeNode* curr = dummy;
    increasingOrder(root,curr);
    preorderTraversal(dummy->right);

    return 0;
}
