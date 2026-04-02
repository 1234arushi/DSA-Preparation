//https://leetcode.com/problems/remove-element/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        //method 2:Two Pointers - when elements to remove are rare:dry run !!!!!!
        
        int i=0;
        int n=nums.size();
        while(i<n)
        {
            if(nums[i]==val)
            {
                //Note that the last element that was swapped in could be the 
                //value you want to remove itself. But don't worry, in the next                          
                //iteration we will still check this element.
                nums[i]=nums[n-1];
                n--;
            }
            else
            {
                i++;
            }
        }
        return n;
        
        
        //method 1:Two pointers
        
        /*int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=val)
            {
                nums[i]=nums[j];
                i++;
            }
        }
        return i;*/
        
    }
};
