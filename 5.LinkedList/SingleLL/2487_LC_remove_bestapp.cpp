
#include <iostream>
using namespace std;
#include <stack>

struct Node {
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
    Node(){
        this->next = nullptr;
    }
    
};


void InsertEnd(Node* &head, int val){\
    Node* temp = new Node(val);
    Node* curr = head;
    if(head == nullptr){
        head = temp;
    }
    else{
    while(curr->next != nullptr){
        curr = curr->next;
    } 
    curr->next = temp;
    }
ListNode* cur = head;
        stack<ListNode*> stack;
        
        while (cur != nullptr) {
            while (!stack.empty() && stack.top()->val < cur->val) {
                stack.pop();
            }
            stack.push(cur);
            cur = cur->next;
        }
        
        ListNode* nxt = nullptr;
        while (!stack.empty()) {
            cur = stack.top();
            stack.pop();
            cur->next = nxt;
            nxt = cur;
        }
        
        return cur;
}

void PrintLL(Node* head){
    Node* curr = head;
    while(curr!=nullptr){
        cout<<curr->val<<endl;
   ListNode* cur = head;
        stack<ListNode*> stack;
        
        while (cur != nullptr) {
            while (!stack.empty() && stack.top()->val < cur->val) {
                stack.pop();
            }
            stack.push(cur);
            cur = cur->next;
        }
        
        ListNode* nxt = nullptr;
        while (!stack.empty()) {
            cur = stack.top();
            stack.pop();
            cur->next = nxt;
            nxt = cur;
        }
        
        return cur;     curr = curr->next;

    }
    cout<<"null";
}

void RemoveNodes(Node* &head){
    Node* curr = head;
    stack<Node*> mystack;

    while(curr!=nullptr){
        while(!mystack.empty() && mystack.top()->val < curr->val){
            mystack.pop();
        }

        mystack.push(curr);
        curr = curr->next;
    }
    Node* nxt = nullptr;
    while(!mystack.empty()){
        curr = mystack.top();
        mystack.pop();
        curr->next = nxt;
        nxt = curr;
    }
    PrintLL(curr);
    
    
}

void best_app(Node* head){
    Node* curr = head;
    Node* prev = nullptr;
    Node* second = curr->next;

    while(head!=nullptr){
        curr->next = prev;
        prev = curr;
        curr = second;
        second->next = prev;

    }
}


int main(int argc, char const *argv[])
{
    Node* head = nullptr;
    InsertEnd(head,5);
    InsertEnd(head,2);
    InsertEnd(head,3);
    // RemoveNodes(head);
    best_app(head);
    // InsertEnd(head,3);
    // PrintLL(head);

    
    return 0;
}

