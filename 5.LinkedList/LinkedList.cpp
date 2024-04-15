#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(){
            this->next = NULL;
        }
        Node(int value){
            this->data = value;
            this->next =NULL;

        }
};

void InsertBegin(Node* &head, int val){
    Node* temp_node = new Node(val);
    temp_node -> next = head;
    head = temp_node;
}

void InsertEnd(Node* &head, int val){
    Node* temp_node = new Node(val);
    Node* curr = head;
    // if(curr == NULL){
    //     cout<<"Error"<<endl;
    // }
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr -> next = temp_node;
}

void PrintLL(Node* &head){
    while (head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
    
}

int main(int argc, char const *argv[])
{   
    Node* head = new Node(3);
    // cout<<head->data<<endl;
    // cout<<(head->next == NULL)<<endl;
    // cout<<(head == NULL)<<endl;
    // cout<<head<<endl;
    // head = head->next;
    // cout<<(head == NULL)<<endl;
    InsertEnd(head,4);
    InsertEnd(head,5);
    InsertEnd(head,6);

    PrintLL(head);



    
    
    return 0;
}
