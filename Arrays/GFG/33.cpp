//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int num2=target-nums[i];
            if(m.find(num2)!=m.end())
            {
                ans.push_back(m[num2]);
                ans.push_back(i);
                return ans;
            }
            m[nums[i]]=i;
            
        }
        return ans;
        
    }
};
