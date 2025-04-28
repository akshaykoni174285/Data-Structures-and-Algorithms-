#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;


bool isPalindrome(string sub){
    string temp = sub;
    reverse(sub.begin(),sub.end());
    return (temp == sub);
}
void dfs(string &s,int start,vector<string> path,vector<vector<string>> &result){

    if(start == s.size()){
        result.push_back(path);
        return;
    }

    for(int end=start;end<s.size();++end){
        string sub = s.substr(start,end-start+1);
        if(isPalindrome(sub)){
            path.push_back(sub);
            dfs(s,end+1,path,result);
            path.pop_back();
        }
    }
}
vector<vector<string>> Palindrome(string val){
    vector<vector<string>> result;
    dfs(val,0,{},result);
    return result;

}
int main(int argc, char const *argv[])
{
    string val = "aab";
    vector<vector<string>> result = Palindrome(val);
    for(auto res:result){
        for(auto r:res){
            cout<<r<<" ";
        }
        cout<<endl;
    }
    return 0;
}
