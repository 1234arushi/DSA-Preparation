//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#-----:question
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        
        
        //Method 3:
        int max_so_far=INT_MIN,max_end=0;
        for(int i=0;i<n;i++)
        {
            //include current to previous subarray
            if(arr[i]<=max_end+arr[i])
            {
                max_end+=arr[i];
            }
            //start the max subarray from current element
            else
            {
                max_end=arr[i];
                
            }
            if(max_end>max_so_far)
            {
                max_so_far=max_end;
            }
        }
        return max_so_far;
        
        //Mehtod 2:
        /*int max_so_far = INT_MIN, max_ending_here = 0;
        for (int i = 0; i < n; i++)
        {
            max_ending_here = max_ending_here + arr[i];
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;

            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;*/
        
        
        
        /*Method 1:
        int max_so_far=arr[0];
        int curr_max=arr[0];
        for(int i=1;i<n;i++)
        {
            curr_max=max(arr[i],curr_max+arr[i]);
            max_so_far=max(max_so_far,curr_max);
        }
        return max_so_far;*/
        //my approach-
       /* vector<int> v;
        int sum=0;
        int max=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            sum+=arr[i];
            v.push_back(sum);
        }
        int x=*max_element(v.begin(), v.end());
        if(x>max)
        {
            return x;
        }
        return max;*/
       
        // Your code here
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
