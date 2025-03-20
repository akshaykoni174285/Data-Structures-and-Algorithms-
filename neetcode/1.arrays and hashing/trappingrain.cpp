#include <iostream>
#include <vector>


using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> leftmax(heights.size());
    vector<int> rightmax(heights.size());
    int n = heights.size();
    // for the first pass get the prefix max of the 
    leftmax[0] = heights[0];
    for (int i = 1; i < heights.size(); i++)
    {
        leftmax[i] = max(leftmax[i-1], heights[i]);
    }
    for(auto val:leftmax){
        cout<<val<<endl;
    }
    cout<<endl;
    rightmax[n-1] = heights[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        rightmax[i] = max(rightmax[i+1], heights[i]);

    }
    for(auto val : rightmax){
        cout<<val<<endl;
    }
    cout<<endl;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if(min(leftmax[i], rightmax[i]) - heights[i] > 0){
            sum = sum + (min(leftmax[i], rightmax[i]) - heights[i]);
        }
    }
    
    
    cout<<"sum = "<<sum<<endl;
    // we will create 
    return 0;
}
