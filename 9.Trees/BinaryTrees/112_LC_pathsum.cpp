#include <iostream>

using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int val){
        this->key=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};


bool hasPathSum(Node* root, int targetsum){
    int checkval = targetsum;
    if(root!=nullptr && targetsum!=0){
        targetsum=targetsum-root->key;
        // cout<<root->key<<endl;
    }
    if(root == nullptr && targetsum!=0){
        return false;
    }
    if(targetsum == 0 && (root->left==nullptr && root->right==nullptr)){
        return true;
    } 


    bool res_left = hasPathSum(root->left, targetsum);
    bool res_right = hasPathSum(root->right, targetsum);
    return res_left || res_right;
}

int main(int argc, char const *argv[])
{
    Node* root = new Node(1);
    // root->left=new Node(2);
    // root->right=new Node(3);
    // root->left->left= new Node(4);
    // root->left->right= new Node(6);
    // root->right->left= new Node(6);
    // root->right->right= new Node(7);
    root->left = new Node(2);
    root->right = new Node(3);
    int targetsum = 4;
    bool res  = hasPathSum(root, targetsum);
    cout<<res<<endl;
    return 0;
}
