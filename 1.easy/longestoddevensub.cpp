#include <iostream>

using namespace std;

bool isEven(int x) { 
    return (x%2 == 0);

}


int main(int argc, char const *argv[])
{
    // int arr[] = {10,12,14,7,8};
    int arr[] = {7,10,13,14};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int count = 1;
    int res = 1;
    bool first = (arr[0]%2==0);



    for (int i = 1; i < size_arr; i++){
        
        if ((arr[i] %2 == 0 && arr[i-1]%2!=0) || (arr[i]%2==1 && arr[i-1]!=1)){
            count++;
            res = max(res,count);
        }
        else{
            count = 1;
        }

    
    
    }

    cout<<res<<endl;
    return 0;
}
