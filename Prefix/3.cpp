//https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum=0,leftsum=0;
        for(int x:nums)
        {
            sum+=x;
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(leftsum==sum-leftsum-nums[i])
            {
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;
        
        //my method:runtime error
        /*int leftsum=0;
        int rightsum=nums[1];
        int pivot=0;
        int i=0;
        while(i<nums.size())
        {
            if(rightsum==leftsum)
            {
                return pivot;
            }
            else if(rightsum>leftsum)
            {
                i++;
                pivot=i;
                leftsum+=nums[i-1];
                rightsum=nums[i+1];
            }
            else if(leftsum>rightsum)
            {
                pivot=i;
                i++;
                rightsum+=nums[i+1];
                
                
            }
            
        }
        return -1;*/
       
    }
};
