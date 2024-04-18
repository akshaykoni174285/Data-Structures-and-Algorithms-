#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int value){
            this->data = value;
            this->next = NULL;
        }
        Node(){
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

int main(int argc, char const *argv[])
{   
    Node* head = new Node();
    InsertAtend(head, 1);
    InsertAtend(head, 2);
    InsertAtend(head, 3);
    InsertAtend(head, 4);
    DeleteBegin(head);
    PrintLL(head);

    
    return 0;
}
