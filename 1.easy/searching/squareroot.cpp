#include <iostream>
#include <vector>

using namespace std;


int SquareRoot(int num){
    int right = num;
    int ans=-1;
    int left = 0;
    while(left<=right){
        int mid = (right + left) / 2;
        if(mid*mid == num){
            return mid;
        }
        else if(mid*mid > num){
            right = mid-1;
        }
        else{
            left = mid+1;
            ans = mid;
        }
    }
    return ans;    

}
int main(int argc, char const *argv[])
{
    int num = 10;
    int res = SquareRoot(num);
    // cout<<res<<end;
    cout<< res;
    return 0;
}
