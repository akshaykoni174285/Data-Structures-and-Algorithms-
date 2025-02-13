#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> numbers = {1,2,3,4};
    int target = 3;
    vector<int> res;
    int l = 0;
    int r = numbers.size()-1;
    while (l<r){
        int sum = numbers[l] + numbers[r];
        if(sum > target){
            r--;
        }
        else if(sum < target){
            l++;
        }
        else{
            cout<<numbers[l]<<numbers[r]<<endl;
            exit(0);
        }
    }
    return 0;
}
