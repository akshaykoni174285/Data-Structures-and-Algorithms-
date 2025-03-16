#include <iostream>

using namespace std;


struct Node{
   int val;
   Node* next;
   Node(int val){
    this->val = val;
    this->next = nullptr;
   } 

};

bool hasCycle(Node* head) {
    Node* curr = head;
    Node* doublecurr = head;

    while(doublecurr!=nullptr && doublecurr->next!=nullptr){
        curr = curr->next;
        doublecurr = doublecurr->next->next;
        if(curr == doublecurr) return true;

    }
    return false;

    
}

int main(int argc, char const *argv[])
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    bool res = hasCycle(head);
    cout<<res<<endl;
    return 0;
}
