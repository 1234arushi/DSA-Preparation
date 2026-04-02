//https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //Method 3:Tortoise method
        int slow=nums[0];
        int fast=nums[0];
        do
        {
            slow=nums[slow];//+1
            fast=nums[nums[fast]];//+2
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast)
       {
           slow=nums[slow];
           fast=nums[fast];
       }
       return slow;
       //Method 2:using map------->TC:O(n),SC:O(n)
        /*unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]])
            {
                return nums[i];
            }
            else
            {
                m[nums[i]]++;
            }
        }
        return -1;*/

        //Method 1:using sorting----->TC:O(n log n),SC:O(n)
        /*sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                return nums[i];

            }
        }
        return -1;*/
        
    }
};
