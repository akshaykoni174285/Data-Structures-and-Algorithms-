#include <iostream>
#include <string>

using namespace std;

bool ispalind(string str){
    int left = 0;
    int right = str.length()-1;
    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        right--;
        left++;
        
    }
    return true;
}

int main(int argc, char const *argv[])
{
    
    string str = "akshay";
    // string str = "nitin";
    bool res = ispalind(str);
    cout<<res<<endl;
    return 0;
}
