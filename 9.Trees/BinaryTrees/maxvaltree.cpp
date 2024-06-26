#include <iostream>

using namespace std;
static int INT_MIN=-100;
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


int max_node(Node* root){
    int val;
    if(root == NULL){
        return 0;
    }
    return max(max(max_node(root->left),max_node(root->right)),root->key);
}

int main(int argc, char const *argv[])
{
    Node* root = new Node(10);
    root->left = new Node(30);
    root->right = new Node(100);
    root->left->left = new Node(80);
    root->left->right = new Node(35);
    root->right->left = new Node(90);
    root->right->right = new Node(8);
    int res = max_node(root);
    cout<<res<<endl;

    return 0;
}
