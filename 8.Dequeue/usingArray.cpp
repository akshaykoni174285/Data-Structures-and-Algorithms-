#include <iostream>
#include <vector>

using namespace std;
struct Dequeue {
    int size;
    int cap;
    int *dequeue;
    int front;
    Dequeue(int cap){
        size = 0;
        cap = cap;
        front = 0;
        dequeue = new int[cap];

    }
    bool isEmpty() {
        return size == 0;
    }
    bool isFull() {
        return size == cap;
    }

    void Insert_atEnd(int val){
        if(isFull()) return;
        dequeue[size] = val;
        size++;
        
    }

    void Insert_atStart(int val){
        if(isFull()) return;
        for (int i = size-1; i>=0; i--)
        {
            /* code */
            dequeue[i+1] = dequeue[i];
        }
        dequeue[0] = val;
        size++;
        
    }
    void Delete_atEnd(){
        if(isEmpty()) return;
        size--;
    }
    void Delete_atStart(){
        if(isEmpty()) return;
        for (int i = 0; i = size-1; i++)
        {
            /* code */
            dequeue[i] = dequeue[i+1];

        }
        size--;
        
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }
        else return dequeue[size-1];
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        else return dequeue[0];
    }
};

int main(int argc, char const *argv[])
{
    Dequeue dequeue(5);
    dequeue.Insert_atStart(3);
    cout<<dequeue.getFront()<<endl;
    cout<<dequeue.getRear()<<endl;
    

    return 0;
}
