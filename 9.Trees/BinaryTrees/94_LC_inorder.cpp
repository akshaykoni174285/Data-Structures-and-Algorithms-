#include <iostream>
#include <vector>

using namespace std;


struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    };
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        return res;

        
    }
private:
    void inorder(TreeNode* root, vector<int>& res){
        if(!root){
            return;
        }
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);

    }
};