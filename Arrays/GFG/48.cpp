//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        
        //Mark as seen by Negation - Space Optimized
        //TC->O(N) SC->O(1)
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            nums[abs(nums[i])-1]= -abs(nums[abs(nums[i])-1]);
            //why "abs" math function used?
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                v.push_back(i+1);
            }
        }
        return v;
        
       //Placing Elements at Correct Index - Space Optimized
        //TC->O(N)  SC->O(1)
        
        /*vector<int> v;
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]!=nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
            else
            {
                i++;
            }
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(i!=nums[i-1])
            {
                v.push_back(i);
            }
        }
        return v;*/
        
       
        
        //TC->O(N)  SC->O(N)
       /* unordered_set<int> s;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(int j=1;j<=nums.size();j++)
        {
            if(s.find(j)==s.end())
            {
                v.push_back(j);
            }
        }
        return v;*/
        
    }
};
