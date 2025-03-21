#include <iostream>

#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> heights = {0,2,0,3,1,0,1,3,2,1};
    int l = 0;
    int r = heights.size()-1;
    int leftmax = heights[l];
    int rightmax = heights[r];
    int res = 0;
    while(l<r){
        if(leftmax < rightmax){
            l++; 
            leftmax = max(leftmax, heights[l]);
            res+= leftmax-heights[l];
        }
        else{
            r--;
            rightmax = max(rightmax, heights[r]);
            res+= rightmax-heights[r];
        }
    }

    cout<<res<<endl;


    return 0;
}
