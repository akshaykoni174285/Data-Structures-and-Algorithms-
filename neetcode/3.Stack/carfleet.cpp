#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

// ffsfs
// target = 10, position = [4,1,0,7], speed = [2,2,1,1]

// sort it out first and then check if the value is greater than previous and loop thorugh all the values 


// if its greater than previous then fleet shoudl be increased



int main(int argc, char const *argv[])
{
    
    int target = 10;
    vector<int> position = {4,1,0,7};
    vector<int> speed = {2,2,1,1};

    int n= position.size();
    int fleet = 1;
    vector<pair<int,int>> res;
    for (int i = 0; i < n; i++)
    {
        res.push_back({position[i], speed[i]});
    }

    sort(res.rbegin(), res.rbegin());

    for(auto x: res){
        cout<<x.first<<" "<<x.second<<endl;
    }

    double previous_val = (double)(target - res[0].first) / res[0].second;

    for(int i=1; i<n; i++){
        double current_val = (double)(target - res[i].first) / res[i].second;
        if (current_val > previous_val){
            previous_val = current_val;
            fleet++;
        }
    }

    cout<<"the ans is :"<<fleet<<endl;


    

    return 0;
}
