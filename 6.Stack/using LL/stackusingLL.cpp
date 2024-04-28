#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data){
        this->next = NULL;
        this->data = data;

    }   
};

struct Stack {
    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void Push(int data){
        Node * temp = new Node(data);
        temp->next = head;
        head = temp;
        size++;

    }
    void Pop(){
        head = head->next;
        size--;
    }
    void PrintLL(){
        Node* curr = head;
        while(curr != NULL){
            cout<<curr->data<<" ";
            curr = curr->next; 
        }
    }
    void Seek(){
        cout<<head->data<<endl;
    }

};

int main(int argc, char const *argv[])
{
    Stack stack;
    stack.Push(10);
    stack.Push(20);
    stack.Push(30);
    stack.Pop();
    stack.PrintLL();
    stack.Seek();
    return 0;
}
