#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            this->data = val;
            this->next = nullptr;
        }    
        Node(){
            this->next = nullptr;
        }

};

void PrintLL(Node* head){
    while(head!=nullptr){
        cout<<head->data<<endl;
        head = head->next;

    }
}

void Insertatbegin(Node* &head, int val){
    Node* curr = head;
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}


void oddneven(Node* &head){
    if(head->next == nullptr){
        cout<<"only one node so that will be our final node"<<endl;

    }    
    Node* odd_ptr = head;
    Node* even_ptr= head->next;

    // while(odd_ptr !=nullptr ){
    //     cout<<odd_ptr->data<<endl;
    //     odd_ptr = odd_ptr->next->next;
    // }
    // while(even_ptr !=nullptr){
    //     cout<<even_ptr->data<<endl;
    //     even_ptr = even_ptr->next->next;
    // }
    while (odd_ptr!=nullptr || even_ptr!=nullptr)
    {
           /* code */
    }
    



}


int main(int argc, char const *argv[])
{
    Node* head = new Node(4);
    Insertatbegin(head,3);
    Insertatbegin(head,2);
    Insertatbegin(head,1);
    Insertatbegin(head,0);
    // PrintLL(head);
    oddneven(head);
    return 0;
}
