#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void PrintLL(Node* head){

    while(head!=NULL){
        cout << head->data;
        head = head->next;
    }
}
void CreateNode(Node* &head, int val){
    // create a new node
    Node* temp_node = new Node(val);
    temp_node->next = head;
    head = temp_node;
    //head is gonna be a pointer to a temp node and head will be having address fof temp node
}

void InsertEnd(int val){
    Node* temp_node = new Node(val);

    
}
void PrintLLRec(Node* &head){
    
    if(head==NULL) return;
    cout<<head->data<<endl;
    PrintLLRec(head->next);
}


int main(int argc, char const *argv[])
{
    Node* head = new Node(1);
    InsertEnd(2);
    
    
    // cout<<head->next->data;
   
//    PrintLL(head);
   PrintLLRec(head);

    
    return 0;
}
