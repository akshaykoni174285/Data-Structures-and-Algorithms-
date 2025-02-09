#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

// solving intituion 

// 1. have a hasmap with the number and their freuqnce so <int,int> can

// 2. and then sort it descending and then for loop of the k number 


using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<int,int> map;

    vector<int> nums = {1,2,2,3,3,3};
    int k =2;
    for (auto num:nums) {
        map[num]++;
    }
    // meaning we want top 2 frequent number and that would be 2 and 3
    vector<pair<int,int> > vec(map.begin(), map.end());

    sort(vec.begin(),vec.end(),[](const pair<int,int>& a, const pair<int,int>& b){
        return a.second > b.second;
    });


    for (auto pair:vec){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    vector<int> result;
    for(int i=0;i<k;i++){
        cout<<vec[i].first<<endl;
        result.push_back(vec[i].first);
    }


    return 0;
}
