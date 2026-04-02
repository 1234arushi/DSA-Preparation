//https://leetcode.com/problems/3sum-closest/description/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            int lo=i+1,hi=nums.size()-1;
            while(lo<hi)
            {
                if(nums[i]+nums[lo]+nums[hi]==target)
                {
                    return target;
                }
                else if(abs(nums[i]+nums[lo]+nums[hi]-target)<diff)
                {
                    diff=abs(nums[i]+nums[lo]+nums[hi]-target);
                    ans=nums[i]+nums[lo]+nums[hi];
                }
                if(nums[i]+nums[lo]+nums[hi]<target)
                {
                    lo++;
                }
                else
                {
                    hi--;

                }
            }
        }
        return ans;
        
    }
};
