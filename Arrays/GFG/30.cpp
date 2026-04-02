//https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
       //method 1:Two pointer approach:
        int sum=0,start=0,ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            //while loop taken cuz what if remove a single element but then also sum is 
            //not less than target
            //ans sum>=target:bcz we need to remove that start element for each array
            //when sum==target or >target
            while(sum>=target)
            {
                ans=min(ans,i-start+1);
                sum=sum-nums[start];
                start++;
                
                
            }
        }
        return (ans!=INT_MAX)?ans:0;
        
    }
};
