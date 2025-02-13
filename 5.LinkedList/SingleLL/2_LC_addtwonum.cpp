#include <iostream>
#include <cstddef>

using namespace std;


struct Node{
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};

void twoSum(Node* h1,Node* h2){
    int carry = 0;
    int * ptr = &carry;

    while(h1!=nullptr){
        // add the two vales 
        // check if its greater than 10 if yes then find the remainder and print the val
        // carry the remainder and null the remainder and
        int sum = h1->data + h2->data + *ptr;
        
        
        int first = sum%10;
        *ptr = (sum - (sum%10))/10;
        

        cout<<first<<" ";
        h1 = h1->next;
        h2 = h2->next;
            
        


    }

}

int main(int argc, char const *argv[])
{
    Node* head1 = new Node(2);
    head1->next = new Node(4);
    head1->next->next = new Node(3);
    Node* head2 = new Node(5);
    head2->next = new Node(6);
    head2->next->next = new Node(5);
    twoSum(head1,head2);
    return 0;
}
