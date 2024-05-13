#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Stack{
    public:
        int top;
        int max_size=0;
        int *array;
        Stack(int size){
            top = -1;
            max_size = size;
            array = new int[max_size];
            
        }
        bool isEmpty();
        bool isFull(){
            return top == max_size-1;
        }
        void pop(){
            if(isEmpty()){
                cout<<"UNDERFLOWING!!!"<<endl;
                exit(0);
            }
            top--;
            
        }
        void push(int data){
            if(isFull()){
                cout<<"OVERFLOWING!!!"<<endl;
                exit(0);
            }
            top++;
            array[top] = data;
        }
        void peek(){
            cout<<array[top]<<endl;
            
        }
};
bool Stack::isEmpty(){
    return top==-1;
}


int main(int argc, char const *argv[])
{
    /* code */
    Stack myStack(5);
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.pop();
    
    
    myStack.peek();
    



    return 0;
}
