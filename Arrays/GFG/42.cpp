//https://leetcode.com/problems/contains-duplicate-ii/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        //similar as below
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            //The map::count() is a built-in function in C++ STL which 
            //returns 1 if the element with key K is present in the map container. 
            //It returns 0 if the element with key K is not present in the container.
            if(mp.count(nums[i]))
            {
                int diff=abs(mp[nums[i]]-i);
              
                if(diff<=k)
                {
                    return true;
                }
            }
            mp[nums[i]]=i;
        }
        return false;
        
        //TC->O(N)  SC->O(N)
        /*unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i])==0)
            {
                m[nums[i]]=i;
            }
            //when we found 2nd freq of that element then-
            else if((i-m[nums[i]])<=k)
            {
                return true;
            }
            else
            {
                m[nums[i]]=i;//if it is not less than k then include this for 
                //maybe new index that give us the desired bool=true;
            }
        }
        return false;*/
       
    }
};
