//https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/::::MEDIUM

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       //another sol:from leetcode
        int n=nums.size();
        vector<int> ans(n,0);
        int indexpos=0,indexneg=1;
        for(auto num:nums)
        {
            if(num>0)
            {
                ans[indexpos]=num;
                indexpos+=2;
            }
            else
            {
                ans[indexneg]=num;
                indexneg+=2;
            }
        }
        return ans;

        //my method:
        /*vector<int> positive;
        vector<int> negative;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                negative.push_back(nums[i]);
            }
            else
            {
                positive.push_back(nums[i]);
            }
        }
        int neg=0,pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2!=0)
            {
                nums[i]=negative[neg++];

            }
            else
            {
                nums[i]=positive[pos++];

            }
        }
        return nums;*/
        
    }
};
---------------------------------------------------------------------------------------------------------------------------------------------------------------------



//https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1::::::EASY
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    
	    //Method 2:
	    vector<int> p;
	    vector<int> ne;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            p.push_back(arr[i]);
	        }
	        else
	        {
	            ne.push_back(arr[i]);
	        }
	    }
	    int i=0,j=0,k=0;
	    while(i<p.size() && j<ne.size())
	    {
	        if(k%2==0)
	        {
	            arr[k++]=p[i++];
	        }
	        else
	        {
	            arr[k++]=ne[j++];
	        }
	    }
	    //when positive and negative no are not equal then as much as you could have alternated it then at last simply push the element as it is:
	    //Arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
	    //Output:5 -5 2 -2 4 -8 7 1 8 0 
	    while(i<p.size())
	    {
	        arr[k++]=p[i++];
	    }
	     while(j<ne.size())
	    {
	        arr[k++]=ne[j++];
	    }
	    
	    
	    
	    //Method 1:
	    /*vector<int> v1;
	    vector<int> v2;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	           v1.push_back(arr[i]);
	        }
	        else
	        {
	            v2.push_back(arr[i]);
	        }
	    }
	    int i=0,j=0,k=0;
	    int len1=v1.size();
	    int len2=v2.size();
	    while(k<n)
	    {
	        if(i<len1)
	        {
	            arr[k++]=v1[i++];
	        }
	        if(k<n)
	        {
	            if(j<len2)
	            {
	                arr[k++]=v2[j++];
	            }
	        }
	    }*/
	    
	  
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
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
