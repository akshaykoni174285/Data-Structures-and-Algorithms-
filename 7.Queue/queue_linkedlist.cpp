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

struct Queue{
    Node* head;
    Node* tail;
    Queue(){
        head = NULL;
        tail = NULL;
    }
    
    void Dequeue(){
        head = head->next;    
    }
    void Enqueue(int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
        tail->next = temp;
        tail = temp;
        }
    }
    void getFront(){
        cout<<head->data<<endl;
    }
    void getTail(){
        cout<<tail->data<<endl;
    }

    
};

int main(int argc, char const *argv[])
{
    Queue queue;
    queue.Enqueue(0);
    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);
    queue.getFront();
    queue.Dequeue();
    queue.Dequeue();
    queue.getTail();
    queue.getFront();
    return 0;
}
