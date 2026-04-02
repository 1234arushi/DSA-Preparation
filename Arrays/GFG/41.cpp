//https://leetcode.com/problems/contains-duplicate/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //TC->O(N LOG N) SC->O(1): sorting
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        //if i<nums.size() :: runtime error
        {
            if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;
        
        
        
        //TC->O(N)  SC->O(N): map
        
        /*unordered_map<int,int> m;//space complexity??->O(N)
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]>=2)
            {
                return true;
            }
        }
        return false;*/
        
    }
};
