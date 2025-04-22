#include <iostream>
#include <vector>
#include <stack>


using namespace std;


struct ListNode{
    int val;
    ListNode* next;
    ListNode(int data): val(data), next(nullptr) {};
};


ListNode* createSampleLL(){
    ListNode* root = new ListNode(1);
    root->next = new ListNode(2);
    root->next->next = new ListNode(3);
    root->next->next->next = new ListNode(4);
    return root;
}


ListNode* ReverseLL(ListNode* node){
    ListNode* prev = nullptr;
    ListNode* fwd = nullptr;
    ListNode* curr = node;
    
    while (curr!=nullptr)
    {
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;

    }
    return prev;
    

}
void PrinLL(ListNode* root){
    ListNode* curr = root;
    while(curr!=nullptr){
        cout<<curr->val<<endl;
        curr = curr->next;
    }
}


ListNode* removeKfromEnd(ListNode* node, int k) {
    ListNode* revHead = ReverseLL(node);

    if (k == 1) {
        ListNode* temp = revHead;
        revHead = revHead->next;
        delete temp;
    } else {
        ListNode* curr = revHead;
        for (int i = 1; i < k - 1 && curr->next != nullptr; ++i) {
            curr = curr->next;
        }

        if (curr->next != nullptr) {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
    }

    return ReverseLL(revHead);
}
int main(int argc, char const *argv[])
{
    ListNode* node = createSampleLL();
    int k = 2;
    ListNode* res = removeKfromEnd(node,k);
    PrinLL(res);
    return 0;
}
