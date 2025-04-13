#include <iostream>
#include <queue>
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
    // root->left->right = new TreeNode(7);
    // root->right->right = new TreeNode(20);
    return root;
}

void LevelOrderTraverse(TreeNode* root){
    queue<TreeNode*> myqueue;
    if(root == nullptr) return;
    myqueue.push(root);

    while(!myqueue.empty()){
        int levelSize = myqueue.size();
        TreeNode* node = nullptr;
        for (int i = 0; i < levelSize; ++i) {
            node = myqueue.front();
            myqueue.pop();

            if(node->left) myqueue.push(node->left);
            if(node->right) myqueue.push(node->right);
        }
        cout<<node->val<<endl;


    }
}

int main() {
    TreeNode* root = createSampleTree();
    LevelOrderTraverse(root);


    return 0;
}
