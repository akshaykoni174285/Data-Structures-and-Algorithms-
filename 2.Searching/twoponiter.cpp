#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2,4,8,9,11,20,30};
    int target = 20;
    int i = 0;
    int j = sizeof(arr)/sizeof(arr[0]) -1;

    // the time complexity is O(n)
    while (i<j)
    {
        if (arr[i] + arr[j] > target){
            j--;
        }
        else if (arr[i] + arr[j] < target){
            i++;
        }
        else if (arr[i] + arr[j] == target){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            exit(0);
            i++;
            j--;
        }
        else{
            cout<<"no value";
        }
    }

    
    return 0;
}
