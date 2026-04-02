//https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        //Youtube method-not understood
        set<int> s(nums.begin(),nums.end());//???
        if(*s.begin()==0)//???
        {
            //s.erase(0);
            return s.size()-1;//???
        }
        return s.size();
        
        
        
        //My method after understanding-
        /*unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                m[nums[i]]++;
            }
        }
        return m.size();*/
        
    }
};
