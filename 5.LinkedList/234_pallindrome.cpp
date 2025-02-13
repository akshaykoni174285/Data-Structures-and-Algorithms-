#include <iostream>

using namespace std;

struct Node{
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

Node* ReverseLL(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    Node* Next = NULL;
    while(curr != NULL){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
   
    

}
void PrintLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;

}
void isPalendrome(Node* head,Node* r_head){
    while(head && r_head){
        if(head->data!=r_head->data){
            cout<<"not palindrome"<<endl;
            exit(0);
        }
        head = head->next;
        r_head = r_head->next;
    }
    cout<<"palindrome"<<endl;
}



int main(int argc, char const *argv[])
{
    Node* head = new Node(1);
    InsertEnd(head, 2);
    InsertEnd(head, 2);
    InsertEnd(head, 1);
    
    PrintLL(head);
    Node* r_head = ReverseLL(head);
    PrintLL(r_head);
    isPalendrome(head,r_head);

    
    // L1.PrintLL();
    
  

    return 0;
}
