#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,1,1,3};
    int counter = 0;
    int inner;

    for (size_t outer = 0; outer < nums.size()-1; outer++)
    {

        for (size_t inner = outer+1; inner < nums.size(); inner++)
        {
            if (nums[outer] == nums[inner])
            {
                counter++;
            }
            
        }
        
        
    }

    // how to loop through all values in the vector
    // for ( int x: nums ){
    //     cout<<x<<" "<<endl ;   }

    cout<<counter<<endl;
    
    

    return 0;
}
