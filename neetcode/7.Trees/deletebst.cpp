#include <iostream>
using namespace std;

// Node structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Sample tree creation
TreeNode* generateSampleBST() {
    /*
            5
           / \
          3   8
         / \   \
        2   4   10
    */
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right->right = new TreeNode(10);

    return root;
}

// Inorder traversal to verify structure
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

TreeNode *DeleteBST(TreeNode *root, int key)
{
    if (root == nullptr)
        return root;
    TreeNode *curr = root;
    if (key > curr->val)
    {
        curr->right = DeleteBST(curr->right, key);
    }
    else if (key < curr->val)
    {
        curr->left = DeleteBST(curr->left, key);
    }
    else
    {
        // we found the node to be deleted
        if (curr->left == nullptr)
        {
            TreeNode *temp = curr->right;
            delete curr;
            return temp;
        }
        else if (curr->right == nullptr)
        {
            TreeNode *temp = curr->left;
            delete curr;
            return temp;
        }
        else
        {
            TreeNode *sucessor = curr->right;
            while (sucessor && sucessor->left != nullptr)
            {
                sucessor = sucessor->left;
            }
            curr->val = sucessor->val; // Copy the value of the successor
            curr->right = DeleteBST(curr->right, sucessor->val);
        }
    }
    return curr;
}
int main() {
    TreeNode* root = generateSampleBST();

    cout << "Inorder traversal of the initial BST: ";
    inorder(root);
    cout << endl;

    // TODO: Add your insert, search, and delete calls here
    TreeNode* result = DeleteBST(root,4);
    inorder(result); // Assuming you have a DeleteBST function defined
    return 0;
}
