//LEETCODE SOLUTION-
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        //Method: TC->O(n)  SC->O(1)
        int ans=0;
       for(int i=0;i<nums.size();i++)
       {
           ans^=nums[i];
           
       }
        return ans;
        
    }
};





//https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends

class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        unordered_map<int, int> umap;
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(umap[arr[i]]==1)
            {
                return arr[i];
            }
        }
        return 0;
        // Complete the function
        
    } 
  
};


// { Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}
  // } Driver Code Ends
