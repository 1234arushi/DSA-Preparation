//https://leetcode.com/problems/maximum-product-of-three-numbers/submissions/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        //method 2:single scan->TC:O(N)  SC:O(1)
        
        int min1=INT_MAX,min2=INT_MAX;
        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            //findinf min1 and min2
           if(nums[i]<=min1)
           {
               min2=min1;//previous val of min1 will be min2
               min1=nums[i];//new min value of min1
           }
            else if(nums[i]<=min2)//what if min1 we have is the smallest but min2 isn't
            {
                min2=nums[i];
            }
            
            //finding max1,max2,max3
            if(nums[i]>=max1)
            {
                max3=max2;
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>=max2)
            {
                max3=max2;
                max2=nums[i];
            }
            else if(nums[i]>=max3)
            {
                max3=nums[i];
            }
        }
        return max(min1*min2*max1,max1*max2*max3);
        
        //method 1:using sorting- TC->O(N LOG N)  SC->O(LOG N)
        /*sort(nums.begin(),nums.end());
        int n=nums.size();
        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
        */
    }
};
