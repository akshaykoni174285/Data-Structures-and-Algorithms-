#include <iostream>

#include <vector>


using namespace std;


struct Node{
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
};


Node* SumTwo(Node* a, Node* b){
    Node* dummy = new Node(0);
    Node* curr = dummy;
    int carry = 0;

    while(a!=nullptr || b!=nullptr || carry!=0){
        int v1 = (a!=nullptr) ? a->val : 0;
        int v2 = (b!=nullptr) ? b->val : 0;

        
        int val = v1 + v2 + carry;
        carry = val / 10;
        val = val % 10;
        curr->next = new Node(val);
        curr = curr->next;

        a = (a!=nullptr) ? a->next : nullptr;
        b = (b!=nullptr) ? b->next : nullptr;
    } 

    Node* res = dummy->next;
    delete dummy;
    return res; 
}

void PrintLL(Node* head){
    Node*  cur = head;
    while(cur!=nullptr){
        cout<<cur->val<<endl;
        cur = cur->next;
    }

}


int main(int argc, char const *argv[])
{
    Node* l1 = new Node(1);
    l1->next = new Node(2);
    l1->next->next = new Node(3);

    Node* l2 = new Node(4);
    l2->next = new Node(9);
    l2->next->next = new Node(6);

    Node* res = SumTwo(l1, l2);
    PrintLL(res);
    return 0;
}
