//https://leetcode.com/problems/permutations/

class Solution {
public:
    //method 2:
    void recurPermute(int index,vector<int> &nums,vector<vector<int>> &ans)
    {
        if(index==nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            recurPermute(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }
    
    //method 1:
    /*void recurpermute(vector<int> &nums,vector<int> &ds,int freq[],vector<vector<int>> &ans)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                recurpermute(nums,ds,freq,ans);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }*/
    vector<vector<int>> permute(vector<int>& nums) {
        //method 1:
        /*vector<vector<int>> ans;
        vector<int> ds;
        //int freq[nums.size()]={0};//hash array-->error
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            freq[i]=0;
        }
        recurpermute(nums,ds,freq,ans);
        return ans;*/
        
        //method 2:
        vector<vector<int>> ans;
        //index=0
        recurPermute(0,nums,ans);
        return ans;
    }
};
