#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int data) : val(data), next(nullptr) {}
};

Node* FirstNode(Node* head){
    Node* fast = head;
    Node* slow = head;

    while (fast !=nullptr && fast->next!=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            Node* start = head;
            while(start!=slow){
                slow = slow->next;
                start = start->next;
            }
            return slow;
        }
    }
    return nullptr;
    


}

int main(int argc, char const *argv[])
{
    // Create nodes
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Connect the nodes: 1 -> 2 -> 3 -> 4 -> 5
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    fifth->next = third;
    Node* result = FirstNode(head);
    cout<<result->val<<endl;
   
    return 0;
}
