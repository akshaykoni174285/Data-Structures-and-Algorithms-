#include <iostream>
#include <vector>
#include <queue>
// #include <functional>

using namespace std;

int lastStoneWeight(vector<int>& stones) {
    // using priority queue use max heap 
    priority_queue<int> pq;
    for(auto stone:stones){
        pq.push(stone);
    }
    while(pq.size() > 1){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        if(second < first){
            pq.push(first-second);
        }
    }
    pq.push(0);
    return pq.top();
    // go from end to begin
    // if both same pop 
    // if not pop and push the difference
        
}

int main(int argc, char const *argv[])
{
    vector<int> stones = {2,3,6,2,4};
    int result = lastStoneWeight(stones);
    cout<<result<<endl;
    return 0;
}
