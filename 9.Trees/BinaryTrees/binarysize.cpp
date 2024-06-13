#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int val){
        this->key = val;
        this->right = NULL;
        this->left = NULL;
    }
};

void TreeSize(Node* root){
     if(root==NULL){
        return ;
     }
     int prev_size = 1;
     int curr_size=0;
     queue<Node*> queue;
     queue.push(root);
     while(queue.empty() == false){
        Node* curr = queue.front();
        queue.pop();
        if(curr->left!=NULL){
            queue.push(curr->left);
            prev_size++;
        }
        if(curr->right!=NULL){
            queue.push(curr->right);
            prev_size++;
        }
      

     }
     cout<<prev_size<<endl;

     
     
}

int main(int argc, char const *argv[])
{   
    Node* root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    TreeSize(root);
    
    return 0;
}
