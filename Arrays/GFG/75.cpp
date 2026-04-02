//https://leetcode.com/problems/set-mismatch/description/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        //method :in-plcae sorting
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]!=nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);
            }


        }
        for(int i=0;i<nums.size();i++)
        {
            if(i+1!=nums[i])
            {
                return {nums[i],i+1};//{repeating,missing}
            }
        }
        return {-1};
      
    }
};
