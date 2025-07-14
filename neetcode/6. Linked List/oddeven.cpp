#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}

};


class Solution{
    public:
    ListNode* oddEvenList(ListNode* head) {
        // check if its empty or only 2 nodes 
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
    return head;
}
        ListNode* even = head->next;
        ListNode* odd = head;


        ListNode* oddhead = odd;
        ListNode* evenhead = even;


        while(even!=nullptr && even->next!=nullptr){
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even ->next;
        }
        odd->next = evenhead;
        return oddhead;

        
    }
};


void PrintLL(ListNode* head){
    ListNode* curr = head;
    while(curr){
        cout<<curr->val<<endl;
        curr = curr->next;
    }
}
int main(int argc, char const *argv[])
{
    Solution sol;

    // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(5);

    // Link the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    PrintLL(head);

    ListNode* result = sol.oddEvenList(head);

    PrintLL(result);

    return 0;
}
