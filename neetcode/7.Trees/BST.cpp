#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);          // Traverse left subtree
        cout << root->data << " ";             // Visit node
        inorderTraversal(root->right);         // Traverse right subtree
    }
}

Node* createBinaryTree() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    return root;
}

Node* minValueNode(Node* node) {
    Node* curr = node;
    while(curr && curr->left!=nullptr){
        curr = curr->left;
    }
    return curr;
}
Node* deleteNode(Node* node,int key) {
    // Base case: If the tree is empty
    if (node == nullptr)
        return node;

    // search th node for which we need to delete
    if (key < node->data)
        node->left = deleteNode(node->left, key);
    else if (key > node->data)
        node->right = deleteNode(node->right, key);

    // else we found the node and we need to check the cases
    // is it a leaf node or a single parent node 
    else{
        if (node->left == nullptr){
            Node* temp = node->right;
            delete node;
            return temp;
        }
        else if (node->right == nullptr){
            Node* temp = node->left;
            delete node;
            return temp;
        }
        // if node has two children
        // we want inorder sucessor of the right of root
        Node* temp = minValueNode(node->right);
        node->data = temp->data;
        // we have to delete the node 
        node->right = deleteNode(node->right, temp->data);
    }
    return node;
}



void levelorderTraversal(Node* root) {
    queue<Node*> myqueue;
    myqueue.push(root);
    while(!myqueue.empty()){
        Node* temp = myqueue.front();
        myqueue.pop();
        cout<<temp->data<<" ";
        if(temp->left)myqueue.push(temp->right);
        if (temp->right)myqueue.push(temp->left);
    }
}


void invertTree(Node* root) {
    if(root == nullptr) return;
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertTree(root->left);
    invertTree(root->right);


}

Node* invertTreeITT(Node* node){
    stack<Node*> mystack;
    if(node == nullptr) return nullptr;

    mystack.push(node);

    while(!mystack.empty()){
        Node* curr = mystack.top();
        mystack.pop();
        swap(curr->left,curr->right);
        if(curr->left)mystack.push(curr->left);
        if(curr->right)mystack.push(curr->right);
    }
    
    return node;




}
int main() {
    Node* root = createBinaryTree();

    // cout << "In-Order Traversal of the Binary Tree: ";


    // inorderTraversal(root);
    levelorderTraversal(root);

    invertTree(root);
    cout<<endl;
    levelorderTraversal(root);

    cout<<endl;
    invertTreeITT(root);
    cout<<endl;
    levelorderTraversal(root);

    // int key=5;
    // root = deleteNode(root,key);
    cout<<endl;

    return 0;
}
