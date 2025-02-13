#include <iostream>
#include <queue>

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

void LevelorderTraverse(Node* root){
    queue<Node*> Queue;
    // int sum=0;
    if(root == nullptr) return;

    Queue.push(root);
    int sum = 1;

    while(Queue.empty() == false){
        // int sum = -1;
        // sum = max(sum,Queue.size());
        cout<<Queue.size()<<endl;
        sum = max(sum,int(Queue.size()));
        Node* current = Queue.front();
        Queue.pop();
        // cout<<current->key<<endl;

        if(current->left != nullptr){
            Queue.push(current->left);
        }

        // this is to check if its not null and adding the nodes

        if(current->right != nullptr){
            Queue.push(current->right);
        }
        sum = max(sum,int(Queue.size()));
    }
    cout<<"maximum width is"<<sum<<endl;





}

int main(int argc, char const *argv[])
{
    Node* root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
  
    LevelorderTraverse(root); 
    return 0;
}
