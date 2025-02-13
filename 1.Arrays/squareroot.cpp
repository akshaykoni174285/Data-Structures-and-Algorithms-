#include <iostream>

using namespace std;


int SquareRoot(int num){
    int min = 1;
    int max = num;
    int ans;
    while (min<=max) 
    {
        /* code */
        int mid = (min+max)/2;
        if ((mid * mid) == num){
            return mid;
        }
        if((mid * mid) > num){
            max = mid-1;
        }
        else if ((mid * mid) < num){
            min = mid+1;
            ans = mid;
        }

    }
    return ans;
    
}
int main(int argc, char const *argv[])
{
    int num = 10;
    int res = SquareRoot(num);
    cout<<res<<endl;
    return 0;
}
