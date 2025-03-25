class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int right = 1;
    
        for (int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[right]){
                nums[i] = nums[i]*2;
                nums[right] = 0;
            }   
            right++;
        }
    
        // shift all the 0 to end 
        int i = 0;
        int zeroind = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]!=0){
                swap(nums[i], nums[zeroind]);
                zeroind++;
            }
        }
    
        return nums;
        }
    };