#include <iostream>
#include <vector>


using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {10,15,20,11,30};
    int low = 0;
    int mid = 2+1;
    int high = 4+1;

    while (low <= mid && mid < high) {
        if (arr[low] < arr[mid]){
            cout<< arr[low]<<endl;
            low++;
        }
        else {
            cout<<arr[mid]<<endl;
            mid++;
        }
    }
    

    return 0;
}
