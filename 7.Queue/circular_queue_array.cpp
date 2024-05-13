#include <iostream>

using namespace std;


struct CircularBuffer{
    int front;
    int back;
    int cap;
    int *queue;
    CircularBuffer(int size){
        front = back = 0;
        cap = size;
        queue = new int[cap];

    }
    
    void Enqueue(int val){
        if(isFull()){
            cout<<"OVERFLOWING!!!"<<endl;
        }


    }
    bool isEmpty(){
        return front == back;
    }
    bool isFull(){
        return ((front-back == -1) || (front-back == cap-1));
        
    }
};
int main(int argc, char const *argv[])
{
    cout<<5%6;
    return 0;
}
