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

Node* MergeSort(Node* n1, Node* n2){
    if(n1==NULL){
        return n2;
    }
    if(n2==NULL){
        return n1;
    }
    Node* temp = n1;
    if(n1->data < n2->data){
        n1 = n1->next;
    }
    else{
        temp = n2;
        n2 = n2->next;
    }
    Node* curr = temp;
    while(n1&&n2){
        if(n1->data < n2->data){
            curr->next = n1;
            n1 = n1->next;

        }
        else{
            curr->next = n2;
            n2 = n2 -> next;
        }
        curr = curr->next;

    }
    if(!n1){
        curr->next = n2;
    }
    else{
        curr->next = n1;
    }
    
    return temp;
}



int main(int argc, char const *argv[])
{
    Node* head1 = new Node(1);
    InsertEnd(head1, 2);
    InsertEnd(head1, 3);
    InsertEnd(head1, 4);
    InsertEnd(head1, 5);
    PrintLL(head1);

    Node* head2 = new Node(2);
    InsertEnd(head2, 4);
    InsertEnd(head2, 5);
    InsertEnd(head2, 6);
    PrintLL(head2);
    Node* sorted = MergeSort(head1,head2);
    PrintLL(sorted);

    
    // L1.PrintLL();
    
  

    return 0;
}
