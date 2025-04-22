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
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(20);
    return root;
}

void allpaths(TreeNode* root, vector<int>& path, vector<vector<int>>& result) {
    if (root == nullptr) return;

    // Add current node to the path
    path.push_back(root->val);

    // If it's a leaf node, save the current path
    if (root->left == nullptr && root->right == nullptr) {
        result.push_back(path);
    } else {
        // Recurse on left and right children
        allpaths(root->left, path, result);
        allpaths(root->right, path, result);
    }

}

int main(int argc, char const *argv[])
{
    TreeNode* root = createSampleTree();
    vector<int> path;
    vector<vector<int>> result;
    allpaths(root,path,result);
 
    for(auto x:result){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

