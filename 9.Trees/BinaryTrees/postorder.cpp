#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* right;
    Node* left;
    Node(int val){
        this->key = val;
        right = NULL;
        left = NULL;
    }
};

void TraverseBT(Node* root){
    if(root == NULL) return;
    TraverseBT(root->left);
    TraverseBT(root->right);
    cout<<root->key;
    
        
    
}

int main(int argc, char const *argv[])
{
    Node* root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    TraverseBT(root);

    return 0;
}
