#include <iostream>

using namespace std;

struct Node{
    int key;
    Node* right;
    Node* left;
    Node(int val){
        this->key = val;
        this->right = nullptr;
        this->left = nullptr;
    }
};


int main(int argc, const char** argv) {
    
    return 0;
}