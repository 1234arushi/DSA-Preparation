//GFG-

//https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        sort(arr,arr+N);
        string LCP="";
        
        string first=arr[0];
        string last=arr[N-1];
        
        for(int i=0;i<arr[N-1].size();i++)
        {
            if(first[i]==last[i])
            {
                LCP.push_back(first[i]);
            }
            else
            {
                break;
            }
        }
        return LCP==""?"-1":LCP;
        // your code here
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends


//LEETCODE-
//https://leetcode.com/problems/longest-common-prefix/solution/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        string LCP="";
        string first=strs[0];
        int n=strs.size();
        string last=strs[n-1];
        for(int i=0;i<first.size();i++)//i<last.size()
        {
            if(first[i]==last[i])
            {
                LCP.push_back(first[i]);
            }
            else
            {
                break;
            }
        }
        return LCP==" "?"-1":LCP;
        
        
    }
};
