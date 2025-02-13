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

void PrintLL(Node* &head){
    while (head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
    
}

void DelNode(Node* &head, int val){

    Node* curr = head;
    Node* prev = head;
    if(curr->data == val&& curr == prev){
        head = curr->next;
        prev->next = NULL;
    }
    while (curr->data!=val)
    {
        /* code */
        curr = curr->next;
    }

    prev->next = curr->next;
    curr->next = NULL;

    
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
    insertNodeatpos(head,7,3);
    PrintLL(head);




    
    
    return 0;
}
