#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int key;
    Node* right;
    Node* left;
    Node(int val){
        this->key = val;
        right = NULL;
        left = NULL;
    }
};

void LevelOrderTraverse(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> queue;
    queue.push(root);
 

    while(queue.empty() == false){
         int count = queue.size();
        for (size_t i = 0; i < count; i++)
        {
            /* code */
            Node* curr = queue.front();
        queue.pop();
        cout<<curr->key<<" ";
        
        if(curr->left != NULL){
            queue.push(curr->left);
        }
        if(curr->right != NULL){
            queue.push(curr->right);
        }
        } 
        cout<<endl; 
    }
    

}



int main(int argc, char const *argv[])
{
    /* code */
    Node* root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    LevelOrderTraverse(root);
    return 0;
}
