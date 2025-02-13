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

int Height(Node* root){
    if(root==nullptr) return 0;

    return max(Height(root->left),Height(root->right)) +1;
}

bool isBalanced(Node* root){

    if(root==nullptr){
        return true;
    }
    if(root->left==nullptr && root->right==nullptr) return true;

    int l_height = Height(root->left);
    int r_height = Height(root->right);
    // cout<<l_height<<" "<<r_height;

    
    
    return (abs(l_height-r_height<2) && isBalanced(root->left) && isBalanced(root->right));// return (abs(l_height-r_height)<2 && isBalanced(root->left) && isBalanced(root->right));

}

int main(int argc, char const *argv[])
{
    /* code */
    Node* root = new Node(20);
    root->left =new Node(8);
    root->right =new Node(5);
    root->left->right =new Node(7);
    root->left->left =new Node(110);
    if(isBalanced(root)){
        cout<<"its balanced";   
    } else {
        cout<<"its not balanced";
    }
    return 0;
}
