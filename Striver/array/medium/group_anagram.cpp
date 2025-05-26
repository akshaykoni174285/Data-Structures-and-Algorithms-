#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    unordered_map<string,vector<string>> anagrams;
    for(auto &str : strs){
        string sorted_strs = str;
        sort(sorted_strs.begin(),sorted_strs.end());
        anagrams[sorted_strs].push_back(str);
    }
    vector<vector<string>> result;
    for(auto &pair : anagrams){
        result.push_back(pair.second);
    }
    return result;

}


int main(int argc, char const *argv[])
{
    vector<string> strs = {"act","pots","tops","cat","stop","hat"};
    vector<vector<string>> result = groupAnagrams(strs);

    for(auto &group : result){
        for(auto &str : group){
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}
