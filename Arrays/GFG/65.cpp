//https://leetcode.com/problems/most-frequent-even-element/submissions/

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        map<int,int>m;
        for(auto n:nums)
        {
            m[n]++;
        }
        int ans=-1,max=-1;
        for(auto m1:m)
        {
            if(m1.first%2==0 && m1.second>max)
            {
                max=m1.second;
                ans=m1.first;
            }
                
        }
        return ans;
        
        //my corrected sol kind of:
        /*map<int,int> m;//not unordered_map!!!!
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                m[nums[i]]++;
                
            }
            
        }
        
        if(m.empty())
        {
            return -1;
        }
        int max=INT_MIN;
        for(auto i:m)
        {
            if(i.second>max)
            {
                ans=i.first;
                max=i.second;
                
            }
        }
       
        return ans;*/
    }
};
