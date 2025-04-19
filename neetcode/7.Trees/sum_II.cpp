#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}

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

vector<int> sumTree(TreeNode* root,int sum){
    vector<int> result;
    stack<TreeNode*> stack;

    while(!stack.empty()){
        TreeNode* node = stack.top();
        
    }
}

int main(int argc, char const *argv[])
{
    TreeNode* root = createSampleTree();
    int sum = 45;
    vector<int> result = sumTree(root,sum);

    return 0;
}
