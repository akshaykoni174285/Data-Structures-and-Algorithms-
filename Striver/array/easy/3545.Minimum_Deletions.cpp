#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>


using namespace std;


int main(int argc, char const *argv[])
{
    unordered_map<char,int> map;
    string s = "abc";
    // string s = "aabb";
    // string s = "aaabb";

    int k =2;
    int result = 0;
    for(auto &value:s){
        map[value]++;
    }
    int keys = map.size();
    cout<<keys<<endl;
    int smallest = INT_MAX;
    char smallest_char;
    while(map.size()!=k){

        for(auto &value:map){
            if(value.second<smallest){
                smallest = value.second;
                smallest_char = value.first;
            }
        }
        result += smallest;
        map.erase(smallest_char);



    }
    // count the keys
    // if greater than k then remove the less freq character 
    // and add in the result
    cout<<result<<endl;
    return 0;
}
