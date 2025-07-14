#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

// TreeNode structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Sample Tree:
//         1
//        / \
//       2   3
//      / \   \
//     4   5   6

TreeNode* buildSampleTree() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    return root;
}


void inorder(TreeNode* root) {
    if (root == NULL) return;
    cout << root->val << " ";
    inorder(root->left);
    inorder(root->right);
}

void preorder(TreeNode* root) {
    if (root == NULL) return;
    preorder(root->left);
    cout << root->val << " ";
    preorder(root->right);
}
void postorder(TreeNode* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

void preorderItt(TreeNode* root){
    if (root == NULL) return;

    stack<TreeNode*> s;
    s.push(root);

    while (!s.empty()) {
        TreeNode* node = s.top();
        s.pop();
        cout << node->val << " ";

        // Push right child first so that left child is processed first
        if (node->right) s.push(node->right);
        if (node->left) s.push(node->left);
    }
}


void inorderItt(TreeNode* root){
    if(root == nullptr) return;

    stack<TreeNode*>s;

    TreeNode* curr = root;
    while(curr || !s.empty()){
        while(curr){
            s.push(curr);
            curr = curr->left;

        }
        curr = s.top();
        s.pop();
        cout << curr->val << " ";
        curr = curr->right;
    }
}

vector<int> postorderItt(TreeNode* root){
    vector<int> result;
    if(root == nullptr) return result;
    stack<TreeNode*> s;
    s.push(root);
    
    while(!s.empty()) {
        TreeNode* node = s.top();
        s.pop();
        result.push_back(node->val);

        if (node->left) s.push(node->left);
        if (node->right) s.push(node->right);
    }
    reverse(result.begin(), result.end()); 
    return result;

}

void levelorderTraversal(TreeNode* root){
    if(root == nullptr) return;
    vector<vector<int>> levels;
    vector<int> currentLevel;
    queue<TreeNode*> q;
    q.push(root);
    q.push(nullptr); // Marker for end of level
    while(!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if(node == nullptr) {
            levels.push_back(currentLevel);
            currentLevel.clear();
            if(!q.empty()) {
                q.push(nullptr); // Add marker for next level
            }
        } else {
            currentLevel.push_back(node->val);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }
}


int main() {
    TreeNode* root = buildSampleTree();
    
    // You can call your traversal functions here
    // Example:
    // inorder(root);
    // preorder(root);
    // postorder(root);
    // preorderItt(root);
    // inorderItt(root);
    vector<int> result = postorderItt(root);

    for(auto &val : result){
        cout << val << " ";
    }
    return 0;
}
