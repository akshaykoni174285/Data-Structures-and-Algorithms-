#include <iostream>
#include <vector>
#include <stack>

using namespace std;


int main(int argc, const char** argv) {
    vector<int> temp = {30,38,30,36,35,40,28};

    vector<int> res(temp.size(),0);

    // this will add the values and also the indices for it 
    stack<pair<int,int> > stack;

    for (int i=0; i<temp.size(); i++)
    {
        int tem = temp[i];
        while(!stack.empty() && tem> stack.top().first){
            auto pair = stack.top();
            stack.pop();
            res[pair.second] = i - pair.second;

        }
        stack.push({tem,i});
    }
    
    for(auto x: res){
        cout<<x<<endl;
    }

}
