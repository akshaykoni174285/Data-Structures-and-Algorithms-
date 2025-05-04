#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Heap{
    vector<int> heap;
    void bubbleup(int index){
        while(index>0){
            int parent  = (index-1)/2;
            if(heap[index]<heap[parent]){
                swap(heap[index],heap[parent]);
                index = parent;
            }
            else break;
        }
    }
    public:
        int MinExtract(){
            if(heap.size() == 0) return INT_MAX;
            int minvalue = heap[0];
            if(heap.size() == 1){
                // heap.pop_back();
                heap.pop_back();
                return minvalue; 
            }
            heap[0] = heap.back();   // Move last element to root
            heap.pop_back();         // Remove last element
            Heapify(0);
            return minvalue;

        }
        void Heapify(int index){
            int lt = 2*index+1;
            int rt = 2*index+2;
            int smallest = index;

            if(lt<heap.size() && heap[lt]< heap[index]){
                smallest = lt;
            }
            if(rt<heap.size() && heap[rt] < heap[smallest]){
                smallest = rt;
            }
            if(smallest != index){
                swap(heap[index],heap[smallest]);
                Heapify(smallest);
            }
        }
        void InsertHeap(int value){
            heap.push_back(value);
            bubbleup(heap.size()-1);
        }
        void printHeap(){
            for(auto val:heap){
                cout<<val<<endl;
            }
        }

};

int main(int argc, char const *argv[])
{
    Heap h;
    return 0;
}
