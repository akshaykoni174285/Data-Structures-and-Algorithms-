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

struct LinkedList{
    Node* head;
    LinkedList(int val){
        Node*temp = new Node(val);
        head = temp;
    }
    void Insert(int val){
        Node *temp  =new Node(val);
        Node* curr = head;
        
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
        
        
    }
    void PrintLL(){
        Node* curr = head;
        while(curr!=NULL){
            cout<<curr->data<<endl;
            curr = curr->next;
        }
    }
    void RemoveDup(){
        // if the head is null or if there is only one node so return that node itself 
        if(head==NULL || head->next==NULL){
            cout<<head->data<<endl;
            exit(1);
        }
        // if there are more than one node check if the data is equal or not 
        Node* curr = head;
        while(curr->next!=NULL){
            if (curr->data != curr->next->data){
                curr = curr->next;
            }
            else{curr->next = curr->next->next;
            }
            continue;
        }
        PrintLL();
        
        
    }
};



int main(int argc, char const *argv[])
{
    LinkedList L1(1);
    L1.Insert(1);
    L1.Insert(1);
    L1.Insert(3);
    L1.Insert(4);
    L1.Insert(4);
    L1.Insert(6);
    // L1.PrintLL();
    L1.RemoveDup();
  

    return 0;
}
