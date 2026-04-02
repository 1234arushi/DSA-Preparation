//https://leetcode.com/problems/summary-ranges/
class Solution {
public:
    string getstr(int a,int b)
    {
        return a==b? to_string(a):to_string(a)+"->"+to_string(b);
    }
    vector<string> summaryRanges(vector<int>& nums) {
        
        //TC->O(N)  SC->O(N) or O(1)
        
        vector<string> ans;
        
        //what is this base case for??????::helped in resolving the runtime error
        if(!nums.size())
        {
            return ans;
        }
        
        
        int first=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]+1!=nums[i])
            {
                ans.push_back(getstr(first,nums[i-1]));
                first=nums[i];//begining val of another range
            }
        }
        ans.push_back(getstr(first,nums.back()));
        return ans;
        
    }
};
