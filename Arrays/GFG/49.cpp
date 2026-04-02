//https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
       
        int max_window_size=INT_MIN;
        int window_size=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                window_size++;
                
            }
            else
            {
                max_window_size=max(max_window_size,window_size);
                window_size=0;
            }
        }
        max_window_size=max(max_window_size,window_size);
        return max_window_size;
        
    }
};
