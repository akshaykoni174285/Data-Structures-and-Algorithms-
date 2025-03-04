#include <iostream>

using namespace std;


class Node {
    public:
        int data;
        Node* next;

        Node(int val){
            this->data = val;
            this->next = nullptr;
        }
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }
    void InsertAtBegin(int value){
        Node* node = new Node(value);
        node->next = head;
        head = node;
    }

    void DeleteAtBegin(){
        if(!head){
            cout<<"the linked list is empty"<<endl;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void InsertAtEnd(int value) {
        Node* newNode = new Node(value);
        Node*  curr = head;
        while(curr->next !=nullptr){
            curr = curr->next;
        }
        curr->next = newNode;

        
    }
    void DeleteAtEnd() {
        Node* curr = head;
        while(curr->next->next !=nullptr){
            curr = curr->next;
        }
        Node* temp = curr->next;
        curr->next = nullptr;
        delete temp;

    }

    void InsertAtPosition(int value,int position) {
        // Node* newNode = new Node(value);
        // first loop till postition
        // make the new node point to next
        // make the previous node point to new node
        // so you will have to have 2 pointer 
        if(position < 0){
            cout<<"invalid position"<<endl;

        }
        if (position == 1){
            InsertAtBegin(value);
        }
        Node* newNode = new Node(value);
        Node* temp = head;
        for(int i=1; temp && i<position-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;



    }

    void PrintLL(){
        if(head){
            cout<<"null linked list"<<endl;
        }
        Node* curr = head;
        while(curr != nullptr){
            cout<<curr->data<<endl;
            curr = curr->next;
        }

    }
};

int main(int argc, char const *argv[])
{
    LinkedList list;
    list.InsertAtBegin(2);
    list.InsertAtEnd(3);
    list.InsertAtEnd(4);
    list.InsertAtPosition(5,2);
    list.PrintLL();

    return 0;
}
