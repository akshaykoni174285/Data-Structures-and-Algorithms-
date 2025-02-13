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
    bool pathsum(Node* root, int cursum){

        if(root == nullptr) return false;

        cursum = cursum + root->val;

        if(root->left == nullptr and root->right == nullptr){
            return cursum == targetsum;
        }

        return pathsum(root->left, cursum) || pathsum(root->right,cursum);

    }
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
