#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2,5,12,16,23};
    int target = 16;
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);

    
    while(l<=r){
        int m =  l + (r-l)/2;

        if(arr[m] == target){
            cout<<"found in " <<m<<endl;
            break;
        }
        else if(arr[m]< target){
            l = m+1;
        }
        else{
            r=m-1;
        }
    }

    return 0;
}
