#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>


using namespace std;


int main(int argc, char const *argv[])
{
    string s = "ywwkew";
    int left = 0;
    int max_len = 0;
    unordered_set<char> myset;

    for (int right = 0; right < s.length(); right++)
    {
        // if it doesnt find anything it will return end so if duplicate it should not return end

        while(myset.find(s[right])!= myset.end()){
            myset.erase(s[left]);
            left++;

        }
        myset.insert(s[right]);
        max_len = max(max_len,right-left+1);
    }
    
    cout<<"the max string len is :"<<max_len<<endl;

    return 0;
}
