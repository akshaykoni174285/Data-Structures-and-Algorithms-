#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            this->data = val;
            this->next = NULL;
        }    
        Node(){
            this->next = NULL;
        }

};

void InsertAtend(Node* &head, int val){
    //create a node 
    Node* curr = head;
    Node* temp = new Node(val);
    while(curr->next != NULL){
        curr = curr->next;

    }
    curr->next = temp;
}

void PrintLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int FindKey(Node* &head, int key){
    int pos = 1;
    Node* curr = head;
    while (curr != NULL)
    {
        if(curr->data == key){
            return pos;
        }
            pos++;
            curr = curr->next;
        
    }
    return -1;
    
}

int main(int argc, char const *argv[])
{
    Node* head = new Node(10);
    InsertAtend(head,20);
    InsertAtend(head,30);
    InsertAtend(head,40);
    PrintLL(head);
    int res = FindKey(head,30);
    cout<<endl<<res<<endl;

    return 0;
}
