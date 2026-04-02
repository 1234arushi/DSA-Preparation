//https://practice.geeksforgeeks.org/problems/edit-distance3702/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    
  public:
  
    int editDistance(string s, string t) {
        
        //TC->O(m*n) SC->O(m*n)
        
        
        int m=s.size();
        int n=t.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                //one of the if/else if work :)
                
                //If first string is empty, only option is to
                // insert all characters of second string
                if(i==0)
                {
                    dp[i][j]=j;// Min. operations = i
                    
                }
                // If second string is empty, only option is to
                // remove all characters of first string??
                else if(j==0)
                {
                    dp[i][j]=i;// Min. operations = i
                    
                }
                else if(s[i-1]==t[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {                  //replace    //remove   //insert
                    dp[i][j]=min(1+dp[i-1][j-1],min(1+dp[i-1][j],1+dp[i][j-1]));
                }
            }
        }
        return dp[m][n];
        // Code here
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
