#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "racecar";
    string t = "carrace";
    unordered_map<char,int> map1;
    unordered_map<char,int> map2;

    for(auto x: s){
        map1[x]++;
    }

    int char_size = s.length();
    bool flag = false;
    for (const auto &x : t){
        if (map1[x] == 0) flag = true;
        else {
            map1[x]--;
        }
    }
    if (flag){
        cout<<"not anagram";
    }
    else cout<<"anagram";

    return 0;
}
