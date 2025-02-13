#include <iostream>

using namespace std;


struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int val){
        this->key = val;
        this->right = nullptr;
        this->left = nullptr;

    }
};

Node* prevv = nullptr;

Node* conversiontoLL(Node* root){
    if(root == nullptr) return root;
    Node* curr = conversiontoLL(root->left);
    if(prevv == nullptr) {
        curr = root;
    }
    else {
        prevv->right = root;
        root->left = prevv;
    }
    prevv = root;
    conversiontoLL(root->right);
    return curr;
    
}

void PrintLL(Node* root){
    while(root!=nullptr){
        cout<<root->key<<endl;
        root = root->right;
    }
}
int main(int argc, char const *argv[])
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    Node* res = conversiontoLL(root);
    PrintLL(res);

    return 0;
}
