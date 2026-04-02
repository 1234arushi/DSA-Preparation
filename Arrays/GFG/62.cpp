//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        //Two pointer approach:
        
        //Pattern - When checking for the quantity of water between any two heights, 
        //the bottleneck will be the minimum height out of the two, if, after which, 
        //we continue to pour water, it will overflow.We will start with our 
        //pointers - l and r - at the ends of the array because we want the width 
        //to be as big as possible. So, why not start with the maximum possible width.
        int n=height.size();
        int ans=INT_MIN;
        
        int start=0,end=n-1;
        while(start<end)
        {
            int area=min(height[start],height[end])*(end-start);
            ans=max(ans,area);
            
            
            //these if-else statements are for to get closest heights in values
            //together
            if(height[start]>height[end])
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return ans;
        
        
        //brute force approach:TLE!!!
        //We can brute force the solution by checking each and every 
        //combination and return the maximum area. That will be a O(n ^ 2) solution.
        
        /*int n=height.size();
        int ans=INT_MIN;
        
        for(int i=0;i<n-1;i++)//i<n-1 as last element will not have further heights
        {
            for(int j=i+1;j<n;j++)
            {
                int a=min(height[i],height[j])*(j-i);//min->isliye 
                           //cuz utne tk hii conatiner fill ho paega
                ans=max(ans,a);
            }
        }
        return ans;*/
    }
};
