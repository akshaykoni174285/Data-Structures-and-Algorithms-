#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,4,2};
    unordered_map<int,int> map;
    for(auto x:nums){
        map[x]++;
    }
    for (const auto& x:map){
        if (x.second > 1) cout<<"true";
        else continue;

    }
    

    return 0;
}
