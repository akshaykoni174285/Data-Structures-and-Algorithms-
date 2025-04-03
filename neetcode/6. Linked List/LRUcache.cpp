#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Node{
public:
    int key;
    int val;
    Node* next;
    Node* prev;

    Node(int key, int val) : key(key), val(val),next(nullptr),prev(nullptr) {}

};


class LRU_cache{
private:
    int capacity;
    unordered_map<int,Node*> cache;

    Node* left;
    Node* right;

    // handler function for insert and remove

    void remove(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insert(Node* node){
        Node* prev = right->prev;
        prev->next = node;
        node->prev = prev;
        node->next = right;
        right->prev = node;
    }


public:
    LRU_cache(int capacity) : capacity(capacity){
        cache.clear();
        left = new Node(0,0);
        right = new Node(0,0);
        left->next = right;
        right->prev = left;
    }

    // get function 
    int get(int key){
        if(cache.find(key)!=cache.end()){
            Node* node = cache[key];
            remove(node);
            insert(node);
            return node->val;
        }
        return -1;

    }

    void put(int key,int value){
        // if the key is already there then just update it 
        // if not then create it 
        if(cache.find(key)!=cache.end()){
            Node* node = cache[key];
            // not deleting the node just removing from LL
            remove(node);

            node->val = value;
            insert(node);
            return;
        }
        if(cache.size() >= capacity){
            Node* lru = left->next;
            remove(lru);
            cache.erase(lru->key);
            delete lru;
        }

        Node* node = new Node(key, value);
        cache[key] = node;
        insert(node);
        // if its bigger than the size then remove the lru
    }


    // put function 

    // my distructor function

    ~LRU_cache(){
        Node* curr = left;
        while(curr){
            Node* next = curr->next;
            delete curr;
            curr = next;
        }
    }

};


int main(int argc, char const *argv[])
{
    LRU_cache lru(4);
    lru.put(4,5);
    lru.put(2,6);
    lru.put(2,7);
    cout<<lru.get(2)<<endl;


    return 0;
}
