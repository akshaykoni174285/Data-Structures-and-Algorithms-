#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = this;

    }
    Node(){
        this->next = this;

    }
};

void InsertAtBegin(Node* &head, int val){
    Node* curr = head;
    Node* temp = new Node(val);
    if (head == head->next)
    {
        head->next = temp;
        temp->next = curr;

    }
    
    
    while (curr->next!= head){
        curr = curr->next;

    }
    curr->next = temp;
    temp->next = head;
    head = temp;


}

void InsertAtEnd(Node* &head, int val){
    Node* temp = new Node(val);
    Node* curr =head;
    
    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    
    


}

void PrintLL(Node* &head){
    
    if(head == NULL){
        cout<<"empty"<<endl;
    }
    cout<<head->data<<" ";
    for (Node* p = head->next; p!=head; p = p->next)
    {
     cout<<" "<<p->data<<" ";
        /* code */
    }
    // for(int i=0;i<6;i++){
    //     cout<<head->data<<" ";
    //     head = head->next;
    // }
    
    
}




int main(int argc, char const *argv[])
{
    Node* head = new Node(10);
    // head = InsertAtBegin(head,20);
    // head = InsertAtBegin(head,30);
    InsertAtBegin(head,30);
    InsertAtBegin(head,40);
    // InsertAtEnd(head,20);
    // InsertAtEnd(head,30);
    PrintLL(head);
    return 0;
}
