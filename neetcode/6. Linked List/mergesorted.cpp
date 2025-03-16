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

Node* MergeSorted(Node* list1, Node* list2){
   Node* result = new Node(0);
   Node* res = result;

   while(list1 && list2){
    if(list1->data < list2->data){
        result->next = list1;
        list1 = list1->next;
    }
    else{
        result->next = list2;
        list2 = list2->next;
    }
    result = result->next;

    // if (list1)
    // {
    //     result->next = 
    // }
    // else
    // {
    //     /* code */
    // }
    
    


    }

    if(list1){
        result->next = list1;
    }
    else{
        result->next = list2;
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
    l2->next->next->next = new Node(7);

    Node* res = MergeSorted(l1,l2);
    PrintLL(res->next);
    return 0;
}