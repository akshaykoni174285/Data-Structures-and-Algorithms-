#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
    Node(){
        this->next = nullptr;
    }
    
};


void InsertEnd(Node* &head, int val){\
    Node* temp = new Node(val);
    Node* curr = head;
    if(head == nullptr){
        head = temp;
    }
    else{
    while(curr->next != nullptr){
        curr = curr->next;
    } 
    curr->next = temp;
    }

}

void PrintLL(Node* head){
    Node* curr = head;
    while(curr!=nullptr){
        cout<<curr->val<<endl;
        curr = curr->next;

    }
    cout<<"null";
}

Node* SwapNodes(Node* head){
    Node* dummy = new Node(0);
    Node* prev = dummy;
    Node* curr = head;

    while (curr && curr->next)
    {   
        Node* nextpair = curr->next->next;
        Node* second = curr->next;
     
        
        // swapping
        second->next = curr;
        curr->next = nextpair;
        prev->next = second;

        prev = curr;
        curr = nextpair;


    }
    

    return dummy->next;

}
int main(int argc, char const *argv[])
{
    Node* head = nullptr;
    InsertEnd(head,1);
    InsertEnd(head,2);
    InsertEnd(head,3);
    InsertEnd(head,4);
    // PrintLL(head);
    Node* swapres = SwapNodes(head);
    PrintLL(swapres);

    return 0;
}





