#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>



using namespace std;



int main(int argc, char const *argv[])
{
    vector<string> strs = {"act","pots","tops","cat","stop","hat"};
    unordered_map<string, vector<string>> res;

    for(const auto& str : strs){
        string sortedS = str;
        sort(sortedS.begin(), sortedS.end());
        res[sortedS].push_back(str);

    }
    vector<vector<string>> result;

    for(auto& x : res){
        result.push_back(x.second);
    }

    for(auto res : result){
        for(auto r:res){
            cout << r<< endl;
        }
    }

    return 0;
}
