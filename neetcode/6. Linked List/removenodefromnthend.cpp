#include <iostream>

using namespace std;


struct Node{
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};
void PrintLL(Node* result){
    Node* curr = result;
    while(curr){
        cout<<curr->data<<endl;
        curr = curr->next;
    }

}

Node* RemoveNode(Node* head,int n){
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;
    Node* curr = head;

    while(n>0){
        curr = curr->next;
        n--;
    }

    while(curr!=nullptr){
        curr = curr->next;
        prev = prev->next;

    }
    prev->next = prev->next->next;

    return dummy->next;

}

int main(int argc, char const *argv[])
{
    Node* l1 = new Node(1);
    l1->next = new Node(2);
    l1->next->next = new Node(3);
    l1->next->next->next = new Node(4);
    int k=2;
    Node* res = RemoveNode(l1,k);
    PrintLL(res);
    return 0;
}
