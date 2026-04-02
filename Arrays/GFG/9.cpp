//https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        //Method 2:Hash TC->O(n) SC->O(n)
        unordered_set<int>s;//set could be used and then traverse through set
        //as done in method 1 but traversing through set could be tedious
        int n=N;
        int len=0;
        for(int i=0;i<n;i++)
        {
            //hashing all the array elements
            s.insert(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(s.find(arr[i]-1)==s.end())//arr[i]-1 not found
            {
                //current element is starting element for subsequence
                int j=arr[i];
                while(s.find(j)!=s.end())//finding consecutive integers
                {
                    j++;
                }
                len=max(len,j-arr[i]);
            }
        }
        return len;
    
        /*Method 1:TC->O(n log n) SC->O(1)..vector not counted?
        int n=N;
        int ans=0,count=0;
        sort(arr,arr+n);
        vector<int> v;
        v.push_back(arr[0]);
        for(int i=1;i<n;i++)//inserting repeated elements only once in vector
        {
            if(arr[i]!=arr[i-1])
            {
                v.push_back(arr[i]);
            }
            
        }
        for(int i=0;i<v.size();i++)
        
        {
            if(i>0 && v[i]==v[i-1]+1)//v[1]==v[0]+1
            {
                count++;
            }
            else//reset for new subsequence
            {
                count=1;
            }
            ans=max(ans,count);
        }
        return ans;*/
      //Your code here
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
