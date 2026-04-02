//https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            //checking which half is sorted

            //suppose left-half sorted
            if(nums[low]<=nums[mid])
            {
                //checking whether target exists in left-half or not
                if(target>=nums[low] && target<=nums[mid])
                {
                    high=mid-1;//binary search in left half
                }
                else
                {
                    low=mid+1;//binary search in right half
                }
            }

            //suppose right-half sorted
            else
            {
                if(target>=nums[mid] && target<=nums[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }

            }
        }
        return -1;
        
    }
};
