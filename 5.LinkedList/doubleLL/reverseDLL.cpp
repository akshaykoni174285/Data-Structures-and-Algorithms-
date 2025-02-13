#include <iostream>

using namespace std;


class Node{
    public:
        int data;
        Node* prev = NULL;
        Node* next = NULL;
        
        Node(){
            this->next = this->prev = NULL;
        }
        Node(int val){
            this->data = val;
            this->next = this->prev = NULL;

        }
};
void InsertatEnd(Node* &head, int val){
    Node* temp = new Node(val);
    Node* curr = head;
    while(curr-> next != NULL){
        curr = curr -> next;
    }    
    curr -> next = temp;
    temp ->prev = curr;

    
}

void PrintLL(Node* &head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;

    }
}

void Reverse(Node* &head){
    Node* curr = head;
    Node* temp_prev = NULL;
    while(curr!=NULL){
        temp_prev = curr->prev;
        curr->next = temp_prev;
        curr->prev = curr->next;
        curr = curr->prev;


    }
    
}

int main(int argc, char const *argv[])
{
    Node *head = new Node(10);
    InsertatEnd(head, 20);
    InsertatEnd(head, 30);
    InsertatEnd(head, 40);
    Reverse(head);
    PrintLL(head);


    return 0;
}
