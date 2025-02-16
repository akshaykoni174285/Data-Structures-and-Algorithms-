#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;


int minEatingSpeed(vector<int>& piles, int h){
    int l = 1;
    int r = *max_element(piles.begin(), piles.end());
    int res = r;
    while (l<=r)
    {
       int k = (l+r)/2;
       long long totaltime = 0;
    //    because the number in the piles could be bigger than int 

       for(auto p:piles){
        totaltime += ceil(static_cast<double>(p) / k);
       }

       if(totaltime<=h){
        res = k;
        r = k-1;
       }
       else{
        l = k+1;
       }
    }
    
    return res;
}


int main(int argc, char const *argv[])
{
    vector<int> piles = {1,4,3,2};
    int h = 9;

    int res = minEatingSpeed(piles,h);
    cout<<res<<endl;
    return 0;
}
