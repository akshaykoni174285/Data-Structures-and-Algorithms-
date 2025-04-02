#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> cost = {5,3,4,1,3,2};
    int m = cost[0];
    for (int i = 1; i < cost.size(); i++)
    {
        m = min(m, cost[i]);
        cost[i] = m;
    }

    for(auto x:cost){
        cout<<x<<endl;
    }
    
    return 0;
}
