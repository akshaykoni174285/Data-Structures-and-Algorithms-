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
Node* MiddleNode(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

    }
    return slow;
}

Node* ReverseLL(Node* head2){
    Node* prev = nullptr;
    Node* fwd = nullptr;

    while (head2!=nullptr)
    {fwd = head2->next;
        head2->next = prev;
        prev = head2;
        head2 = fwd;


        
    }
    return prev;

}
void PrintLL(Node* head){
    while(head!=nullptr){
        cout<<head->val<<endl;
        head = head->next;
    }

}

void ReorderLL(Node* head){
    // find the middle of the linked list using fast and slow pointer
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    // now we want to split the list in two so 
    Node* second = slow->next;
    slow->next = nullptr;

    Node* prev = nullptr;
    while(second!=nullptr){
        Node* temp = second->next;
        second->next = prev;
        prev = second;
        second = temp;
    }

    Node* first = head;
    second = prev;

    while(second!=nullptr){
        Node* temp1 = first->next;
        Node* temp2 = second->next;
        first->next = second;
        second->next = temp1;
        first = temp1;
        second = temp2;
    }


}
int main(int argc, char const *argv[])
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    ReorderLL(head);
    PrintLL(head);

    return 0;
}
