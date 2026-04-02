//https://leetcode.com/problems/maximum-product-subarray/submissions/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int ma=nums[0];
        int mi=nums[0];
        int ans=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                swap(ma,mi);
            }
            ma=max(nums[i],nums[i]*ma);
            mi=min(nums[i],nums[i]*mi);
            if(ans<ma)
            {
                ans=ma;
            }
           
            
        }
        return ans;
        
    }
};

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    
	    long long min_val=arr[0];//=1
	    long long  max_val=arr[0];//=1
	    long long max_product=arr[0];//=INT_MIN
	    for(int i=1;i<n;i++)
	    {
	       /* if(arr[i]==0)//why this condition
	       //so that we focus on next element as that element 0
	       
	       //would not be part of a subarray that has max product
	       //so it's basically being  efficient
	        {
	            min_val=1;
	            max_val=1;
	            continue;
	            
	        }*/
	        if(arr[i]<0)
	        {
	            swap(max_val,min_val);
	        }
	        max_val=max((long long )arr[i],max_val*arr[i]);
	        min_val=min((long long )arr[i],min_val*arr[i]);
	        max_product=max(max_product,max_val);
	    }
	    return max_product;
	   

	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
