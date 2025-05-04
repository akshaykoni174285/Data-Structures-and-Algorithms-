#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>


using namespace std;

int numEquivDominoPairs(vector<vector<int>>& dominoes){
    unordered_map<string,int> map;
    int count = 0;
    for(auto &dom:dominoes){
        sort(dom.begin(),dom.end());
        string key = to_string(dom[0]) + "," + to_string(dom[1]);

        if(map.find(key)!=map.end()){
            count++;
        }
        map[key]++;

    }
    return count;
    


}
int main(int argc, char const *argv[])
{
    vector<vector<int>> nums = {{1,2},{2,1},{3,4},{5,6}};
    int result = numEquivDominoPairs(nums);
    cout<<result<<endl;
    return 0;
}
