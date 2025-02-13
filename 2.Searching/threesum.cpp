#include <iostream>
#include <vector>

using namespace std;

bool ThreeSum(vector<int> arr , int target){
    int arr_size =  arr.size();
    int last_index =arr_size-1;


    for (int i = 0; i < arr_size-2; i++)
    {
        // now the loop will be always +1 of that i and finding the sum equal to target - arr[i]
        int first_ele = arr[i];
        last_index = arr_size-1;
        int second_ind = i+1;
        while (second_ind < last_index)
        {
            /* code */
            if (arr[second_ind] + arr[last_index] > target-first_ele)
            {
                /* code */
                last_index--;
               
            }
            else if(arr[second_ind] + arr[last_index] < target-first_ele)
            {
                /* code */
                second_ind++;
        
            }
            else{
                cout<<arr[i]<<arr[second_ind]<<arr[last_index]<<endl;
                
                return true;
            }
            
        }
 
    }
    return false;
    
}

int main(int argc, char const *argv[])
{
    // int arr[] = {3,4,5,6,7,8,9,10};
    vector<int> arr=  {3,4,5,6,7,8,9,10};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int target = 12;

    bool res = ThreeSum(arr, target);
    cout<<res<<endl;
    return 0;
}
