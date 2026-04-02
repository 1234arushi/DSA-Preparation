//https://leetcode.com/problems/sort-array-by-parity-ii/description/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        //leetcode solution 1:
        int even=0,odd=1;
        while(even<nums.size() && odd<nums.size())//agar dono mei se
        //koi bhi false hota that means array mei half jagah odd ya even
        //according to requirement aa chuke
        {
            if(nums[even]%2==0)
            {
                even+=2;
            }
            else
            {
                swap(nums[even],nums[odd]);
                odd+=2;

            }


        }
        return nums;

        
        //my method:TLE
        /*int i=0;
        while(i<nums.size())
        {
            if(i%2==0)
            {
                if(nums[i]%2!=0)
                {
                    swap(nums[i],nums[i+1]);
                }
                else
                {
                    i++;
                }

            }
            else
            {
                if(nums[i]%2==0)
                {
                    swap(nums[i],nums[i+1]);
                }
                else
                {
                    i++;
                }

            }
        }
        return nums;*/
        
    }
};
