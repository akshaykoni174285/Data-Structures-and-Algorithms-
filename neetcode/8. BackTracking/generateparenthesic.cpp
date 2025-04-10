#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> GenerateParent(int k,string res,int closing,int opening,vector<string>result){
    if(res.length() == 2*k){
        result.push_back(res);
        return result;
    }
    
    if (opening < k){
        result = GenerateParent(k,res + "(",closing,opening+1,result);
    }
    if(closing < opening){
        result = GenerateParent(k,res+")",closing+1,opening,result);
    }
    return result;

    
    
}


int main(int argc, char const *argv[])
{
    vector<string> result;
    int k = 3;
    string res = "";

    vector<string> r = GenerateParent(k,res,0,0,result);
    for(auto x:r){
        cout<<x<<endl;
    }
    return 0;
}
