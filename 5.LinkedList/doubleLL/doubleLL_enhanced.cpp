#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
        
    }
    Node(){
        this->next = NULL;
        this->prev = NULL;      
    }
   
};

struct DoubleLL{
    Node* head;
    Node* tail;
    DoubleLL(){
        head = NULL;
        tail = NULL;
    }
    void InsertAtBegin(int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{

            temp->next = head;
            head->prev = temp;
            head = temp;
        }

    }
    void PrintLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    void PrintHead(){
        cout<<endl<<head->data<<endl;
    }
    void PrintTail(){
        cout<<tail->data<<endl;
    }
    void InsertatEnd(int val){
        Node* temp = new Node(val);
        if(head==NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    void DeleteatBegin(){
        head = head->next;
        head->prev = NULL;
    }
    void DeleteatEnd(){
        tail = tail->prev;
        tail->next = NULL;
    }


};



void PrintLL(Node* head){
    Node* temp = head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;    
    }
}



int main(int argc, char const *argv[])
{

    DoubleLL ll;
    ll.InsertAtBegin(2);
    ll.InsertAtBegin(3);
    ll.InsertAtBegin(4);
    ll.InsertatEnd(9);
    ll.DeleteatBegin();
    ll.DeleteatEnd();
    ll.PrintLL();
    ll.PrintHead();
    ll.PrintTail();



    return 0;
}
