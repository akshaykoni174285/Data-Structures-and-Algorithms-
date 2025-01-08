#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2,3,20,6,4,8,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min_val = arr[0];
    int max_dist = arr[1]-arr[0];

    for (size_t i = 1; i < size; i++)
    {
        max_dist = max(max_dist,arr[i]-min_val);
        min_val = min(min_val,arr[i]);
    }
    cout<<"the max dist value is :"<<max_dist<<endl;
    return 0;
}
