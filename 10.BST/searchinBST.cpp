#include <iostream>

using namespace std;


struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int val){
        this->key = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};


bool FindBST(Node* root, int val){
    if(root == nullptr) return false;
    else if(root->key == val) return true;

    else if(val > root->key){

     return FindBST(root->right, val);
    }
    else{
    return FindBST(root->left, val);
    }
}


int main(int argc, char const *argv[])
{
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right->right = new Node(90);
    root->right->left = new Node(60);    
    int find = 80;
    bool res = FindBST(root,find);
    cout<<res<<endl;
    return 0;
}
