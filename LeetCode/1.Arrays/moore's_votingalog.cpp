#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,1,2,2,2,1,1};
    int count = 0;
    int element;

   for(int i = 0; i < nums.size();i++){

    if(count == 0){
        count = 1;
        element = nums[i];
    }
    else if (element == nums[i]){
        count++;
    }
    else{
        count--;
    }

   }
   cout<<element<<endl;
    


    return 0;
}
