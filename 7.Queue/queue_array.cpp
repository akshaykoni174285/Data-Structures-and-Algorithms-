#include <iostream>

using namespace std;

struct Queue{
    
    int *arr;
    int capacity;
    int size;
    Queue(int cap){
        size = 0;
        capacity = cap;
        arr = new int[capacity];
    }

    void Enqueue(int val){
        if(isFull()){
            cout<<"overflow"<<endl;
            exit(0);
            
        }
        arr[size] = val;
        size++;
    }
    bool isFull(){
        return size == capacity;
        
    }
    bool isEmpty(){
        return size == 0;

    }
    int Front(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[0];
        }
    }
    int Rear(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[size-1];
        }
    }
    void Dequeue(){
        if(isEmpty()){
            cout<<"UNDERFLOW!!!"<<endl;
            exit(0);
        }
        for (size_t i = 0; i < size-1; i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
        
    }
};


int main(int argc, char const *argv[])
{
    Queue q(5);
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    q.Dequeue();
    cout<<q.Front()<<endl;
    cout<<q.Rear()<<endl;
    

    return 0;
}
