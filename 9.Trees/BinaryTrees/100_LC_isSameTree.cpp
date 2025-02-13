#include <iostream>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q==nullptr){
            return true;
        }
        if(p == nullptr || q == nullptr){
            return false;
        }
        if(p->val == q->val){
            return isSameTree(p->left,q->left) && isSameTree(p->right, q->right);
        }
        return false;

        
        

    }


    
};