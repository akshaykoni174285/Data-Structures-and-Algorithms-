#include <iostream>

using namespace std;


struct Node{
    
    int key;
    Node* left;
    Node* right;
    Node(int val){
        this->key = val;
        this->right=nullptr;
        this->left=nullptr;
    }    
};

bool isBalanced(Node* root){

    if(root==nullptr){
        return true;
    }
    if(root->left==nullptr && root->right==nullptr) return true;

    int l_height = 0;
    int r_height = 0;

    if(root->left!=nullptr){
        l_height++;
    }
    if(root->right!=nullptr){
        r_height++;
    }
    return (abs(l_height-r_height)<2 && isBalanced(root->left) && isBalanced(root->right));

}

int main(int argc, char const *argv[])
{
    /* code */
    Node* root = new Node(20);
    root->left = new Node(8);
    root->left->right = new Node(5);
    root->left->left = new Node(9);

    root->right = new Node(12);
    root->right->right = new Node(7);
    root->right->right->left = new Node(6);
    bool res = isBalanced(root);
    cout<<res<<endl;
    return 0;
}
