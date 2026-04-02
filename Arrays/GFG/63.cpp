//https://leetcode.com/problems/largest-number-at-least-twice-of-others/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int max_el=*max_element(nums.begin(),nums.end());
        int index;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==max_el)
            {
                index=i;
                continue;
            }
            else if(nums[i]*2>max_el)
            {
                return -1;
            }
        }
        return index;
        
    }
};
