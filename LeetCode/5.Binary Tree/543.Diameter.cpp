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

// int Height(Node* root){
//     if(root==NULL) return 0;
//     return max(Height(root->right),Height(root->left)) + 1;
// }
int Diameter(Node* root){
    if(root->left == nullptr && root->right == nullptr) return 1;
    if(root->left == nullptr || root->right == nullptr) return 1;

    return Diameter(root->left) + Diameter(root->right);
    

}

int main(int argc, char const *argv[])
{
    Node* root = new Node(0);
    root->left = new Node(1);
    // root->right = new Node(2);
    // root->left->left = new Node(3);
    // root->left->right = new Node(4);
    cout<<Diameter(root)<<endl;
    return 0;
}
