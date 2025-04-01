#include <iostream>

#include <vector>
#include <unordered_map>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> left = {1,2,4};
    vector<int> right = {4,5,7};

    // optimal method
    int freq[100] = {0};

    for (int i=0;i<left.size();i++) {
        freq[left[i]] = 1;
        freq[right[i]+1] = -1;
    }


    // prefix the hasmap

    int sum = 0;

    for (int i=0; i < 100; i++)
    {   
        sum = sum + freq[i];
        freq[i] = sum;
    }
    int big = 0;
    for (auto x:freq) {
       if (x>big) big = x;
    }
    cout<<"the biggest value is "<<big<<endl;
    // naieve method  


    // unordered_map<int,int> map;

    // for (int i = 0; i < left.size();i++) {
    //     for (int j = left[i]; j <= right[i]; j++) {
    //         map[j]++;
    //     }
    // }
    // for (auto i : map){
    //     cout<<i.first<<i.second<<endl;
    // }
    // int res=0;
    // int val;
    // for (auto i : map){
    //     if (i.second > res){
    //         res=i.second;
    //         val = i.first;
    //     }
    // }

    // cout<<res<<endl;
    // cout<<val<<endl;
    return 0;
}
