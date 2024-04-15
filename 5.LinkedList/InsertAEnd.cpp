#include <iostream>

using namespace std;

class Node{
    public:
        int data; 
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
    }
};

void InsertBegin(Node* &head,int val){
    Node* temp_node = new Node(val);
    temp_node->next = head;
    head = temp_node;
    

}

// void PrintLL(Node* &head){
//     while(head!=NULL){
//         cout<<head->data<<endl;
//         head = head->next;
//     }
// }
int main(int argc, char const *argv[])
{
    Node* head = new Node(0);
    InsertBegin(head,1);
    InsertBegin(head,2);
    InsertBegin(head,3);
    InsertBegin(head,4);
    // PrintLL(head);
    return 0;
}
