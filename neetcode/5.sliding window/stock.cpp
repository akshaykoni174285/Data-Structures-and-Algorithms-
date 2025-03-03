#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> prices = {10,1,5,6,7,1};
    
    int min_ind = 0;
    int max_res = -1;
    for (int i = 1; i < prices.size(); i++)
    {
        if(prices[i] < prices[min_ind]) {
            min_ind = i;
            continue;
        }
        max_res = max(prices[i]-prices[min_ind],max_res);
    }
    if (max_res == -1){
        cout<<"0"<<endl;
    }
    else{
        cout<<max_res<<endl;
    }
    
    return 0;
}
