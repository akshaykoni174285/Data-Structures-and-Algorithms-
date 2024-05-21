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
};

int main(int argc, char const *argv[])
{
    LinkedList L1(0);
    L1.Insert(1);
    L1.Insert(2);
    L1.Insert(3);
    L1.Insert(4);
    L1.Insert(5);
    L1.Insert(6);
    LinkedList L2(0);
    L2.Insert(1);
    L2.Insert(2);
    L2.Insert(3);
    L2.Insert(4);
    L1.PrintLL();
    cout<<endl;
    L2.PrintLL();

    return 0;
}
