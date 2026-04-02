/https://leetcode.com/problems/majority-element-ii/submissions/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int> ans;
        
        unordered_map<int,int> umap;
        int size=nums.size()/3;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
            
        }
        unordered_map<int,int> ::iterator it;
        for(it=umap.begin();it!=umap.end();it++)
        {
            if(it->second>size)
            {
                ans.push_back(it->first);
            }
        }
        return ans;
        
    }
};
