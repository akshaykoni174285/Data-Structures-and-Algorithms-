#include <iostream>

#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> height = {0,2,0,3,1,0,1,3,2,1};
    int l = 0;
    int r = height.size()-1;
    int leftmax = height[l];
    int rightmax = height[r];
    int res = 0;
    while(l<r){
        if(leftmax < rightmax){
            l++; 
            leftmax = max(leftmax, height[l]);
            res+= leftmax-height[l];
        }
        else{
            r--;
            rightmax = max(rightmax, height[r]);
            res+= rightmax-height[r];
        }
    }

    cout<<res<<endl;


    return 0;
}
