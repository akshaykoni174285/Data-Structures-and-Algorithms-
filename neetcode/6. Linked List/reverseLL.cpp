#include <iostream>

#include <vector>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};

void PrintLL(Node *head){
    Node* curr = head;
    while(curr){
        cout<<"the node is :"<<curr->data<<endl;
        curr = curr->next;
    }
}

Node* reverseLL(Node *head){

    Node* Prev = nullptr;
    Node* Next = nullptr;
    Node* Curr = head;

    while(Curr){
        Next = Curr->next;
        Curr->next = Prev;
        Prev = Curr;
        Curr = Next;


    }
    return Prev;
}
int main(int argc, char const *argv[])
{
    Node* head = new Node(0);
    head->next = new Node(1);
    head->next->next = new Node(2);
    PrintLL(head);
    Node* prev = reverseLL(head);
    PrintLL(prev);

    return 0;
}
