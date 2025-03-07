#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};

Node* MergeSorted(Node* first, Node* second){
   Node* result = new Node(0);
   Node* res = result;

   while(first && second){
    if(first->data < second->data){
        result->next = first;
        first = first->next;
    }
    else{
        result->next = second;
        second = second->next;
    }
    result = result->next;
   }
   while(first){
    result->next = first;
    first = first->next;

   }
   while(second){
    result->next = second;
    second = second->next;
   }
   return res;
}


void PrintLL(Node* &result){
    Node* curr = result;
    while(curr){
        cout<<curr->data<<endl;
        curr = curr->next;
    }

}
int main(int argc, const char** argv) {

    Node* l1 = new Node(1);
    l1->next = new Node(2);
    l1->next->next = new Node(3);

    Node* l2 = new Node(1);
    l2->next = new Node(3);
    l2->next->next = new Node(5);
    l2->next->next->next = new Node(6);

    Node* res = MergeSorted(l1,l2);
    PrintLL(res->next);
    return 0;
}