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
            this->next = NULL;
        }
        
};
void insertNodeatpos(Node* head, int val,int pos){
            Node* curr = head;
            Node* temp = new Node(val);

            if(pos == 1){
                temp->next = head;
                head = temp;
                

            }
            for (size_t i = 0; i < pos-2 && curr != NULL; i++)
            {
                curr = curr->next;
            }
            if (curr  == NULL){
                cout << "quitting";
                exit(1);
                
            }
            temp->next = curr->next;
            curr->next = temp;
            
}
void InsertBegin(Node* head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

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
    while (head!=NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
    
}


// deleting the node 

void DeleteBegin(Node* &head){
    head = head->next;

}

void DeleteEnd(Node* &head){
    Node* curr = head;
    Node* prev = head;

    while(curr->next != NULL){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
}

void DeleteAtPos(Node* head, int pos){
    Node* curr = head;
    Node* prev;
    // for pos 1
    if(pos == 1){
        head = head->next;
    }


    for (size_t i = 0; i < pos-1 ; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;

    
}

int main(int argc, char const *argv[])
{   
    Node* head = new Node();
    InsertAtend(head, 1);
    InsertAtend(head, 2);
    InsertAtend(head, 3);
    InsertAtend(head, 4);
    PrintLL(head);
    DeleteAtPos(head,5);
    PrintLL(head);


    
    return 0;
}
