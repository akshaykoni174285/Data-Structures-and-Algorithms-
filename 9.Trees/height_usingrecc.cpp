#include <iostream>

using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int val){
        this->key = val;
        this->left = NULL;
        this->right = NULL;
    }
    
};

int Height_recc(Node* root){
    if(root == NULL){
        return 0;
 
    }
    int res = (Height_recc(root->left) + Height_recc(root->right))+1;
    return res;
    //int max_left = Height_recc(root->left)+1;
    //int max_right = Height_recc(root->right) + 1;
    //int height = max(max_left, max_right);
    //return height;
 }

int main(int argc, char const *argv[])
{
    Node* root = new Node(10);
    root->left = new Node(30);
    root->right = new Node(100);

    root->left->right = new Node(30);
    root->left->left = new Node(30);
    int res = Height_recc(root);
    cout<<res<<endl;

    return 0;
}


