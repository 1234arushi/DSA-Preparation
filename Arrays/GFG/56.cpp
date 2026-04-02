//https://leetcode.com/problems/range-sum-query-immutable/

class NumArray {
public:
    //method 1:
    //TC->O(m*n) where m->queries,n->no. of elements
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums=nums;//"this->" ptr  pls explain
        
    }
    
    int sumRange(int left, int right) {
                                     //to include right element as well
        return accumulate(nums.begin()+left,nums.begin()+right+1,0);//intially sum is 0
        
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */



--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  class NumArray {
public:
    //method 2:prefix sum
    //TC->O(m) m->queries
    vector<int> nums;
    vector<int>prefix;
    NumArray(vector<int>& nums) {
        this->nums=nums;
        int n=nums.size();
        prefix.resize(n);
        prefixsum(nums);
        
    }
    
    int sumRange(int left, int right) {
        if(left-1>=0)
        {
            return prefix[right]-prefix[left-1];
        }
        else
        {
            return prefix[right];
        }
        
    }
    void prefixsum(vector<int>nums)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                prefix[i]=nums[i];
            }
            else
            {
                prefix[i]=nums[i]+prefix[i-1];
            }
        }
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */


---------------------------------------------------------------------------------------------------------------------------------------------------------------------
class NumArray {
public:
    //method 3:prefix sum
    vector<int>&presum;
    NumArray(vector<int>& nums):presum(nums) {//intializer list:means presum is       referencing to nums array but no copy at all
        for(int i=1;i<presum.size();i++)
        {
            //elements store at i=1,2,3..?
            presum[i]+=presum[i-1];
        }
        
    }
    
    int sumRange(int left, int right) {
        if(left==0)
        {
            return presum[right];
        }
        return presum[right]-presum[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
