#include <iostream>
#include <stddef.h>
#include <cstddef>
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

void TraverseBT(Node* root,int k){
   if(root==NULL) return;
   if(k==0){
    cout<<root->key<<endl;
   }
   else{
        TraverseBT(root->left, k-1);
        TraverseBT(root->right, k-1);
   }
}


int main(int argc, char const *argv[])
{
    int k=2;
    Node* root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    // TraverseBT(root,k);
    // cout<<int(18%10);
    // cout<<int(28%10);
    // cout<<34%10;
    cout<<(34 - (34%10))/10;
    return 0;
}
