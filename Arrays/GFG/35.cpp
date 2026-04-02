//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //using 2-pointers:leetcode solution
        
        if(nums.size()==0)//nums.length()->invalid
        {
            return 0;
        }
        int i=0;//slow runner
        for(int j=1;j<nums.size();j++)//j->fast runner
        {
            if(nums[j]!=nums[i])
            {
                i++;
                nums[i]=nums[j];
            }
            
        }
        return i+1;
        
       //my basic approach:
        /*int low=0;
        int high=1;
        int k=0;
        while(high<nums.size())
        {
            
            if(nums[low]==nums[high])
            {
                high++;
            }
            else
            {
                nums[k]=nums[low];
                low=high;
                high=high+1;
            }
        }*/
        
    }
};
