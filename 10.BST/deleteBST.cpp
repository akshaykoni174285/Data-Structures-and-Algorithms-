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


void InsertBST(Node* root, int val){
    Node* temp = new Node(val);

    if(root == nullptr){
        root = temp;
    }
    else if(val > root->key){
        if(root->right == nullptr){
            root->right = temp;
        }
        else{
            InsertBST(root->right, val);
        }
    }
    else{
        if(root->left == nullptr){
            root->left = temp;
        }
    }

}
Node* FindSuc(Node* curr){
    curr = curr->right;
    while(curr!=nullptr && curr->left == nullptr){
        curr = curr->left;        

    }
    return curr;    
}

Node* DeleteBST(Node* &root, int val){
    
    if(root==nullptr) return nullptr;
    if(val > root->key){
        root->right = DeleteBST(root->right, val);
    }
    else if(val < root->key){
        root->left = DeleteBST(root->left, val);
    }
    else{
        if(root->left == nullptr){
            Node* temp = root->right;

            delete root;
            return temp;
        }
        if (root->right == nullptr){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        
        Node* successor = FindSuc(root);
        root->key = successor->key;
        root->right = DeleteBST(root->right, successor->key);
        
        
    }
    return root;

}


void PrintBST(Node* root){
    if(root == nullptr) return;

    PrintBST(root->left);
    cout<<root->key<<endl;
    PrintBST(root->right);
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
    InsertBST(root,100);
    // InsertBST(root,100);

    root = DeleteBST(root,70);
    PrintBST(root);
    return 0;
}
