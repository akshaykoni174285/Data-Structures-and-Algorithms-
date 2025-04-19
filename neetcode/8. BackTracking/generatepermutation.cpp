#include <iostream>
#include <vector>
#include <string>

using namespace std;



void GetPermutation(string name,int val,vector<string> &result){
    // base case
    if(val == name.length()){
        result.push_back(name);
        return;
    }
}

vector<string> PermutationString(string name){
    vector<string> result;
    GetPermutation(name,0,result);
    return result;
}
int main(int argc, char const *argv[])
{
    string name = "akshay";
    vector<string> result;
    result = PermutationString(name);

    
    return 0;
}
