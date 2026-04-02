//https://leetcode.com/problems/degree-of-an-array/

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        
        //method 2:
        unordered_map<int, int> count, first;
        
        int res=0,degree=0;
        
        for(int i=0;i<nums.size();++i)
        {
            if(first.count(nums[i])==0)
            {
                first[nums[i]]=i;//only stores index of first occurrence of nums[i] 
            }
            if(++count[nums[i]]>degree)//count freq and  find degree of array
            {
                degree=count[nums[i]];
                res=i-first[nums[i]]+1;
                
            }
            else if(count[nums[i]]==degree)
            {
                res=min(res,i-first[nums[i]]+1);
            }
        }
        return res;
        
        
        //method 1:
        
        /*unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        int degree=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            degree=max(degree,int(it->second.size()));
            //it->first:key
            //it->second:vector=indexes stored of key
        }
        int shortest=nums.size();
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second.size()==degree)
            {
                shortest=min(shortest,it->second.back()-it->second[0]+1);
            }
        }
        return shortest;*/
        
    }
};
