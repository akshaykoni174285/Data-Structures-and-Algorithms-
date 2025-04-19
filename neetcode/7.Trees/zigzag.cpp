#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>


using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
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


void LevelOrder(TreeNode* root) {
    if (root == nullptr) return;
    bool rightToLeft = true;

    queue<TreeNode*> queue;
    queue.push(root);
    vector<vector<int>> result;

    while (!queue.empty()) {
        int noofnodes = queue.size();
        vector<int> level;

        for(int i=0;i<noofnodes;++i){
            TreeNode* node = queue.front();
            queue.pop();

            level.push_back(node->val);

            if(node->left) queue.push(node->left);
            if(node->right) queue.push(node->right);

        }
        if(rightToLeft) reverse(level.begin(),level.end());
        result.push_back(level);

    }
    
    return result;
}


int main(int argc, char const *argv[])
{
    TreeNode* root = createSampleTree();
    LevelOrder(root);
    
    return 0;
}
