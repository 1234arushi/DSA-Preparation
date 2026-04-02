//https://leetcode.com/problems/intersection-of-two-arrays/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        //in this intersection question,arent we finding an array
        //but according below approach it seems we are finding elements
        // in another array i.e not seeing continuous elements that form an array that
        //might be included in first one :)
        
        vector<int> ans;
        
        unordered_map<int,int> m;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
            
        }
        for(int j=0;j<nums2.size();j++)
        {
            if(m[nums2[j]])
            {
                ans.push_back(nums2[j]);
                m[nums2[j]]=0;
            }
        }
        return ans;
        
    }
};
