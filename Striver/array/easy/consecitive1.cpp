#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,1,0,1,1,0,1};

    int size_arr = sizeof(arr)/sizeof(arr[0]);
    cout<<size_arr<<endl;
    int count = 0;
    int counter = 0;
    for (size_t i = 0; i < size_arr; i++)
    {
        if(arr[i] == 1){
            counter++;
            
        }
        else{
            
            counter = 0;
        }
        count = max(count, counter);
    }
    cout<<"max consective 1's : "<<count<<endl;
    
    return 0;
}
