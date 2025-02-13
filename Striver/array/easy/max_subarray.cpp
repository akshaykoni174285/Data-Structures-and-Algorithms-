#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {5,4,-1,7,-8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxi = INT_MIN;
    
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size;j++)
        {/* code */
            sum = sum + arr[j];
            maxi = max(maxi,sum);
        }


        
        /* code */
    }
    cout<<"print the max sum array"<<maxi<<endl;
    
    return 0;
}
