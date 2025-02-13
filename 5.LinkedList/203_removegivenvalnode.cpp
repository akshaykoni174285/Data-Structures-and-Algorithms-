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
    LinkedList(){
        Node* temp = new Node();
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
    void RemoveVal(int val){ 
        while(head->data == val && head->next!=NULL){
            head = head->next;
        }
        if(head == NULL){
            cout<<"NULL!!"<<endl;
            exit(0);
        }
        if(head->next == NULL && head->data == val){
            cout<<"removed!!!"<<endl;
            exit(0);
        }

        Node* curr = head;
        while(curr!= NULL){
            if(curr->data == val){
                curr->next = curr->next->next;

            }
            else{
                
                curr = curr->next;
            }
        }
        PrintLL();
    }
    
};



int main(int argc, char const *argv[])
{
    LinkedList L1(1);
    L1.Insert(2);
    L1.Insert(3);
    L1.Insert(4);
    L1.Insert(1);
    L1.Insert(1);
   
    
    
    // L1.PrintLL();
    L1.RemoveVal(1);
  

    return 0;
}
