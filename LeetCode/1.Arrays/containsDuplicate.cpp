#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,4,5,6,7,1};
    unordered_map<int, int> umap;

    for(auto i: nums) umap[i]++;

    for(auto i: umap){
        if(i.second>1){
        cout<<"duplicate ";
        exit(0);
    }
    }
    

    return 0;
}
