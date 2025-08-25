#include <iostream>
#include <vector>
#include <queue>

using namespace std;


struct TreeNode {
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void levelOrderTraversal(TreeNode* root){
    vector<vector<int>> result;
    if (root == nullptr) return;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            TreeNode* current = q.front();
            q.pop();
            level.push_back(current->val);
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        result.push_back(level);
    }
    // Print the result
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    
    levelOrderTraversal(root); 
    return 0;
}

