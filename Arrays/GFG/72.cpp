//https://leetcode.com/problems/sort-array-by-parity/description/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        

        int low=0,high=nums.size()-1;
        while(low<high)
        {
            if(nums[low]%2!=0)//odd
            {
                swap(nums[low],nums[high]);
                high--;
            }
            else
            {
                low++;
            }
        }
        return nums;
    }
};
