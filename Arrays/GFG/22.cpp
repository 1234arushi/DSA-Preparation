//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        //another method:
        sort(a.begin(),a.end());
        int min_diff=INT_MAX;
       
        for(int i=0;i+m-1<n;i++)//i+m-1<n---->jb tk tumahra 'm' size ka subarray
                               //milra tb tk loop work krega
        {
            int diff=a[i+m-1]-a[i];
            if(diff<min_diff)
            {
                min_diff=diff;
            }
        } 
        return min_diff;
                              
        //my method:
        /*sort(a.begin(),a.end());
        long long diff=a[m-1]-a[0];
        
        int j=1;
        for(int i=m;i<n;i++)
        {
            long long x=a[j];
           
            long long y=a[i];
           
            j++;
            diff=min(diff,y-x);
            
        }
        
        return diff;*/
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends
