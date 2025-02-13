#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
    int least = INT_MAX;
    int num[] = {3,-2,1,4};
    int n = 2;
    int size_arr = sizeof(num)/sizeof(num[0]);
    for (size_t i = 0; i <= size_arr-n ; i++)
    {   
        int sum = 0;
        for (int j = i; j < i+n; j++)
        {
            /* code */
            sum = sum + num[j];
        }
        if(sum<0){
            continue;
        }
        least = min(least, sum);
        cout<<sum<<endl;
        
    }
    cout<<least<<endl;

    return 0;
}
