//https://leetcode.com/problems/majority-element/submissions/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //Method 2:boyre moore voting algo(most optimal)
        int candidate=INT_MIN;
        int life=0;
        for(int i=0;i<nums.size();i++)
        {
            if(life==0)
            {
                candidate=nums[i];
                life=1;
            }
            else if(nums[i]==candidate)
            {
                life++;
            }
            else
            {
                life--;
            }
        }
        return candidate;
        
    }
};
