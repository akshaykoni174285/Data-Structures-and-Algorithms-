#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* createSampleTree() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    
    return root;
}

vector<int> inorderTraversal(TreeNode* root){
    vector<int> result;
    stack<TreeNode*> stack;
    TreeNode* curr = root;
    while(curr || !stack.empty()){
        while(curr){
            stack.push(curr);
            curr = curr->left;   
        }

        curr = stack.top();
        result.push_back(curr->val);
        stack.pop();
        curr = curr->right;

    }
    return result;
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> stack;
    if (root == nullptr) return result;


    stack.push(root);

    while(!stack.empty()){
        TreeNode* node = stack.top();
        stack.pop();
        result.push_back(node->val);

        if(node->right) stack.push(node->right);
        if(node->left) stack.push(node->left);
    }

    return result;

}


int main() {
    TreeNode* root = createSampleTree();

    vector<int> preorder = preorderTraversal(root);
    vector<int> inorder = inorderTraversal(root);
    for(auto x:inorder){
        cout<<x<<endl;
    }
    return 0;
}
