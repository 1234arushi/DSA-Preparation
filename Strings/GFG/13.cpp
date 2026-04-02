//https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    
		    //TC->O(n^2)  SC->O(n^2)
		    
		    int n=str.length();
		    int LRC[n+1][n+1];
		    for(int i=0;i<=n;i++)
		    {
		        for(int j=0;j<=n;j++)
		        {
		            if(i==0||j==0)
		            {
		                LRC[i][j]=0;
		            }
		            else if(str[i-1]==str[j-1] && i!=j)
		            {
		                LRC[i][j]=1+LRC[i-1][j-1];
		            }
		            else
		            {
		                LRC[i][j]=max(LRC[i-1][j],LRC[i][j-1]);
		            }
		        }
		    }
		    return LRC[n][n];
		    // Code here
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
