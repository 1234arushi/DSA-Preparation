//https://leetcode.com/problems/move-zeroes/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        //method 2:two pointer approach:TC->O(N) SC->O(1)
       // Here, the total number of operations are optimal. The total                       //operations (array writes) that code  does is Number
       //of non-0 elements.This gives us a much better best-case 
    //(when most of the elements are 0) complexity than last solution.                     //However, the worst-case (when all elements are non-0) complexity 
    //for both the algorithms is same.
        
        
        //lastnonzerodoundat->goes to that index which has zero while
        //cur->iterates through the array and swap when element 
        //at cur index is non-zero basically swapping non-zero
        //elements with the zeros encountered
        for(int lastnonzerofoundat=0,cur=0;cur<nums.size();cur++)
        {
            if(nums[cur]!=0)
            {
                swap(nums[lastnonzerofoundat++],nums[cur]);
            }
        }
        
        


        //method 1:space optimal,operation sub-optimal:TC->O(N) SC->O(1)
        
        //However, the total number of operations are still sub-optimal.    
        //The total operations (array writes) that code does is
        //n (Total number of elements).
       
        /*int lastnonzerofoundat=0;//count of nonzero elements
        
        
        //If the current element is not 0, then we need to
        //append it just in front of last non 0 element we found. 
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[lastnonzerofoundat++]=nums[i];//in-place
            }
        }
        // After we have finished processing,
 	  //all the non-zero elements are already at beginning of array.
 	  // We just need to fill remaining array with 0's.
        for(int j=lastnonzerofoundat;j<nums.size();j++)
        {
            nums[j]=0;
        }
        
    }
};
