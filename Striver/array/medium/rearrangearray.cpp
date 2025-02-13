#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> nums = {3,1,-2,-5,2,-4};

    vector<int> positive_values;
    vector<int> negative_values;
    vector<int> result;
    for(auto x:nums) {
        if (x>0) positive_values.push_back(x);
        else negative_values.push_back(x);
    }
    

    for(int i=0;i<positive_values.size();i++){
        result.push_back(positive_values[i]);
        result.push_back(negative_values[i]);
    }

    for(auto i:result){
        cout<<i<<endl;
    }
    return 0;
}
