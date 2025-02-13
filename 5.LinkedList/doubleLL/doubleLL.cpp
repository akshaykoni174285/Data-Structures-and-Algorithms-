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
void InsertatBegin(Node* &head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    if(head!=NULL){
        head->prev = temp;
    }
    head = temp;
}

void InsertatEnd(Node* &head, int val){
    Node* temp = new Node(val);
    Node* curr = head;
    while(curr -> next != NULL){
        curr = curr -> next;
    }    
    curr -> next = temp;
    temp ->prev = curr;

    
}
void DeletefromBegin(Node* &head){
    head = head->next;
    head -> prev = NULL;

}
void DeletefromEnd(Node* head){
    Node* temp = head;
    while (temp -> next!=NULL)
    {
        temp  = temp-> next;
    }
    temp->prev->next = NULL;

    
}

void PrintLL(Node* &head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;

    }
}

int main(int argc, char const *argv[])
{   

    Node* head = new Node(10);
    InsertatBegin(head,20);
    InsertatBegin(head,30);
    InsertatBegin(head,40);
    InsertatEnd(head, 50);
    DeletefromBegin(head);
    DeletefromEnd(head);
    PrintLL(head);

    return 0;
}
