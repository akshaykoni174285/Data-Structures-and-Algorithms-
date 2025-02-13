#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;


int main(int argc, const char** argv) {
    vector<int> nums = {2,2,1,1,1,2,2};
    unordered_map<int, int> umap;

    for(auto i: nums){
        umap[i]++;
    }

    for(auto i: umap){
        if(i.second > nums.size()/2){
            cout<<i.second<<endl;
        }
    }
    return 0;
}