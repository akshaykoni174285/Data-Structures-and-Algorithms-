#include <iostream>
#include <vector>

using namespace std;

bool SlidingWindow(vector<int> arr, int target){
    int size_arr = arr.size();
    if (size_arr==1 && target==arr[size_arr-1]){
        return true;
    }
    else if(size_arr==1 && target!=arr[size_arr-1]){
        return false;
    }
    int front = 1;
    int rear = 0;
    int sum = arr[front] + arr[rear];

    while (rear< front) {
        if (sum < target){
            front++;
            sum = sum+ arr[front];
            
        }
        else if (sum > target) {
        
            sum = sum-arr[rear];
            rear++;
        
        }
        else{
            return true;
        }

    }
    return false;

    
}


int main(int argc, char const *argv[])
{
    vector<int> arr = {1,4,20,3,10,5};
    int target = 33;
    int res = SlidingWindow(arr, target);
    cout<<res<<endl;
    return 0;
}
