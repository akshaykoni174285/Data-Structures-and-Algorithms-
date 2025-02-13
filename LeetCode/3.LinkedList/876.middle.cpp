#include <iostream>

using namespace std;

struct Node {
    int key;
    Node* next;
    Node(int val){
        this->key = val;
        this->next = nullptr;
    }
};

void PrintLL(Node* root){
    Node* curr = root;

    while(curr != nullptr){
        cout<<curr->key<<endl;
        curr = curr->next;
    }

}

void middleNode(Node* root){
    Node* slow = root;
    Node* fast = root;
    while(fast!=nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->key<<endl;
    
}

int main(int argc, char const *argv[])
{
    Node* root = new Node(0);
    root->next = new Node(1);
    root->next->next = new Node(2);
    root->next->next->next = new Node(3);
    root->next->next->next->next = new Node(4);
    root->next->next->next->next->next = new Node(5);
    PrintLL(root);
    middleNode(root);
    return 0;

}
