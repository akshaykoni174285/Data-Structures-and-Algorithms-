#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// well the intiuation is to check for a hasmap and which number is having 0 frequence return that 

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,4,5};
    int size = nums.size();
    int hash[size + 1] = {0};

    for (size_t i = 0; i < size-1; i++)
    {
        /* code */

        hash[nums[i]]++;


    }
    for (int i = 1; i <= size; i++) {
        if (hash[i] == 0) {
            cout<<i<<endl;
        }
    }
    




    

    
    return 0;
}
