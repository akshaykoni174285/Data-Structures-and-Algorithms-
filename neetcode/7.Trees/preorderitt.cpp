#include <iostream>
#include <vector>
#include <stack>
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
    // root->left->right = new TreeNode(5);
    // root->right->right = new TreeNode(6);
    
    return root;
}

vector<int> PostorderTraversal(TreeNode* root) {
    stack<TreeNode*> stack1;
    stack<TreeNode*> stack2;

    vector<int> result;
    stack1.push(root);
    while(!stack1.empty()){

        TreeNode* node = stack1.top();
        stack1.pop();
        stack2.push(node);

        if(node->left) stack1.push(node->left);
        if(node->right) stack1.push(node->right);
    }

    while(!stack2.empty()){
        result.push_back(stack2.top()->val);
        stack2.pop();
    }

}
// #nothing just nothing 
void inorderTraversal(TreeNode* root){
    stack<TreeNode*> mystack;
    TreeNode* curr = root;
   
    while(curr!=nullptr || !mystack.empty()){
        // we want to visit the left most node 
        while (curr)
        {
            mystack.push(curr);
            curr = curr->left;
        }

        TreeNode* node = mystack.top();
        mystack.pop();
        cout<<node->val<<endl;

        curr = node->right;
    }

}

// vector<int> preorderTraversal(TreeNode* root) {
//     vector<int> result;
//     stack<TreeNode*> stack;
//     if (root == nullptr) return result;


//     stack.push(root);

//     while(!stack.empty()){
//         TreeNode* node = stack.top();
//         stack.pop();
//         result.push_back(node->val);

//         if(node->right) stack.push(node->right);
//         if(node->left) stack.push(node->left);
//     }

//     return result;

// }

// TreeNode* InvertTree(TreeNode* root){
//     if(root == nullptr) return nullptr;

//     swap(root->left,root->right);
//     InvertTree(root->left);
//     InvertTree(root->right);

//     return root;

// }




vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();  // Number of nodes at current level
        vector<int> currentLevel;

        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = q.front();
            q.pop();
            currentLevel.push_back(node->val);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        result.push_back(currentLevel);  // Add current level to result
    }

    return result;
}





int countNodes(TreeNode* root) {
    if(root == nullptr) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
 
}

int countNodesStack(TreeNode* root) {
    stack<TreeNode*> stack;
    int count = 0;
    stack.push(root);

    while(!stack.empty()) {
        TreeNode* node = stack.top();
        stack.pop();
        count++;
        if(node->right) stack.push(node->right);
        if(node->left) stack.push(node->left);
    }
}


int depth(TreeNode *node,int &res) {
    if(node  == nullptr) return 0;
    int lDepth = depth(node->left,res);
    int rDepth = depth(node->right,res);
    
    res = max(res,lDepth+rDepth);


    return 1 + max(lDepth,rDepth);
    
}

int diameterTree(TreeNode* node){
    int res = 0;
    depth(node,res);
    return res;

}

bool isSame(TreeNode* root,TreeNode* root2){
    if(root == nullptr && root2 == nullptr) return true;
    if(root == nullptr || root2 == nullptr) return false;

    if(root->val != root2->val) return false;

    

    return isSame(root->left,root2->left) && isSame(root->right,root2->right);



}

void preorderTraversal(TreeNode* root){
    if(root==nullptr) return;
    cout<<root->val<<endl;
    preorderTraversal(root->left);
    preorderTraversal(root->left);
}

void InvertTree(TreeNode* &root){
    stack<TreeNode*> mystack;
    mystack.push(root);
    while(!mystack.empty()){
        TreeNode* node = mystack.top();
        swap(node->left,node->right);
        if(node->left) mystack.push(node->left);
        if(node->right) mystack.push(node->right);

    }
}

int MaxHeight(TreeNode* root){
    if(root == nullptr) return 0;
    return 1 + max(MaxHeight(root->left),MaxHeight(root->right));
}

int main() {
    TreeNode* root = createSampleTree();
    // inorderTraversal(root);
    // int res = MaxHeight(root);
    // cout<<res<<endl;
    // InvertTree(root);
    // preorderTraversal(root);
    // vector<int> preorder = preorderTraversal(root);
    vector<vector<int>> inorder = levelOrder(root);
    for(auto x:inorder){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;

    }

    // TreeNode* swaproot = InvertTree(root);
    // int res = countNodes(root);
    // int res = diameterTree(root);
    // cout<<res<<endl;
    // vector<int> res = levelOrder(root);
    // for(auto i:res){
    //     for(auto j:i){
    //         cout<<j<<" ";
    // int res = countNodesStack(root);  
    // cout<<res<<endl;
    // vector<vector<int>> res = levelOrder(root);
    // for(auto i:res){
    //     for(auto j:i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
