#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> g = {1,2};
    vector<int> s = {1,2,3};
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int j = 0;
    int i = 0;
    int result = 0;
    while(i<g.size() && j<s.size()){
        if(s[j] < g[i]){
            j++;
        }else{
            result++;
            i++;
            j++;
        
        }
    }
    
    cout<<result<<endl;
    return 0;
}
