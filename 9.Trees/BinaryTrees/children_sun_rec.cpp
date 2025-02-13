#include <iostream>

using namespace std;

struct Node{
    int key;
    Node* right;
    Node* left;
    Node(int val){
        this->key = val;
        this->right = nullptr;
        this->left = nullptr;
    }
};

bool Children_sum(Node* root){
    if (root == nullptr) return true;
    if(root->left == nullptr && root->right == nullptr) return true;
    
    int sum = 0;
    if(root->left != nullptr) {sum += root->left->key;}
    if(root->right != nullptr) {sum += root->right->key;}

    return (sum == root->key && Children_sum(root->left) && Children_sum(root->right)) ;
    
}
int main(int argc, char const *argv[])
{
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    bool res = Children_sum(root);
    
    cout<<res<<endl;
    return 0;
}
