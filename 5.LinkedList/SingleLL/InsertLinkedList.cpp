#include <iostream>

using namespace std;

struct Node 
{
    int data;
    Node* next;
    Node(){
        this->next = NULL;
    }
    Node(int val){
        this->data = val;
        this->next = NULL;
    }
    
};

class LinkedNode{
    private:
        Node* head;
    public:
        LinkedNode(){
            head = NULL;
        }
        void InsertEnd(int val){
            Node* temp_node = new Node(val);
            Node* curr = head;
            // if(curr == NULL){
            //     cout<<"Error"<<endl;
            // }
            while(curr->next != NULL){
            curr = curr->next;
        }
        curr -> next = temp_node;
            }
        Node* insertNodeatpos(Node* head, int val,int pos){
            Node* curr = head;
            Node* temp = new Node(val);

            if(pos == 1){
                temp->next = head;
                head = temp;
                return head;

            }
            for (size_t i = 0; i < pos-2 && curr != NULL; i++)
            {
                curr = curr->next;
            }
            if (curr  == NULL){
                return head;
            }
            temp->next = curr->next;
            curr->next = temp;
            return head;
            
        }   
};


int main(int argc, char const *argv[])
{   LinkedNode li;
    li.InsertEnd(3);

    
    
    return 0;
}
