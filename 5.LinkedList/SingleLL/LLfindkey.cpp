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

void InsertAtend(Node* &head, int val){
    //create a node 
    Node* curr = head;
    Node* temp = new Node(val);
    while(curr->next = nullptr){
        curr = curr->next;

    }
    curr->next = temp;
}

void PrintLL(Node* head){
    while(head != nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int FindKey(Node* &head, int key){
    int pos = 1;
    Node* curr = head;
    while (curr != nullptr)
    {
        if(curr->data == key){
            return pos;
        }
            pos++;
            curr = curr->next;
        
    }
    return -1;
    
}

int findKeyrec(Node* &head, int key){
    int pos=1;
    Node* curr = head;
    if(curr == nullptr){
        return -1;
    }
    if(curr->data == key){
        return 1;
    }
    else{
        

        int res = findKeyrec(head = head->next, key);
        if(pos == -1)return -1;
        else{
            return (res+1);
        }
    }
    
}

int main(int argc, char const *argv[])
{
    Node* head = new Node(10);
    InsertAtend(head,20);
    InsertAtend(head,30);
    InsertAtend(head,40);
    PrintLL(head);
    int res = findKeyrec(head,30);
    cout<<endl<<res<<endl;

    return 0;
}
