#include <iostream>

#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> nums = {2,2,1};
    int max_size = 10;
    
    vector<int> res[max_size];

    for (size_t i = 0; i < res.size(); i++)
    {
        /* code */
        res[nums[i]]++;
    }
    
    return 0;
}
