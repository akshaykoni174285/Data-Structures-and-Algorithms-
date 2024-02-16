#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


bool isAnagram(string s1, string s2){
    // ? naive method O(n^2)
    

    // if(s1.length()!=s2.length()) return false;
    // sort(s1.begin(),s1.end());
    // sort(s2.begin(),s2.end());
    // if(s1 == s2) return true;
    // else return false;

}
int main(int argc, char const *argv[])
{
    string s1 = "aaacbc";
    string s2 = "cabaaa";

    bool res = isAnagram(s1, s2);
    cout <<res<<endl;
    return 0;
}
