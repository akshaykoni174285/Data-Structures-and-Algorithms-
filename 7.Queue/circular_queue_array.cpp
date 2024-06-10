#include <iostream>

using namespace std;


struct CircularBuffer{
    int front;
    int rear;
    int size;
    int *queue;
    CircularBuffer(int s){
        front = rear = -1;
        size = s;
        queue = new int[size];

    }
    bool isFull(){
        return (front == 0 && rear == size - 1) || ((rear+1)%size == front);
    }
    bool isEmpty(){
        return front == -1;
    }
    int getFront(){
        return queue[front];
    }
    int getRear(){
        return queue[rear];
    }

    
    void Enqueue(int val){
        if(isFull()){
            cout<<"overflowing!!!"<<endl;
            exit(0);
        }
        else if(rear == -1){
            rear = front =0;
            queue[rear] = val;
        }
        else if(rear == size-1&& front!=0){
            rear =0;
            queue[rear] = val;
        }
        else{
            rear++;
            queue[rear] = val;
        }
    }
    int Dequeue(){
        if(isEmpty()){
            cout<<"empty queue"<<endl;
            exit(0);
        }
        int data = queue[front];
        queue[front] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;

        }
        else{
            front++;
        }
        return data;

    }


    
};
int main(int argc, char const *argv[])
{
    CircularBuffer queue(3);
    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);
    cout<<queue.Dequeue()<<endl;
    queue.Enqueue(4);
    
    

    return 0;
}
