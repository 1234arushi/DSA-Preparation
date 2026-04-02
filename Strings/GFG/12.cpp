//https://leetcode.com/problems/longest-common-subsequence/
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n=text1.size(), m= text2.size();
        
        vector<vector<int>> lcs(n+1,vector<int>(m+1,0));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(text1[i-1]==text2[j-1])//text1[0]==text2[0]
                {
                    lcs[i][j]=1+lcs[i-1][j-1];
                }
                else
                {
                    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                    
                }
            }
        }
        return lcs[n][m];
        
    }
};


----------------------------------------------------------------------------------------------------------------------------------------------------------------
//https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1
// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        int C[x+1][y+1];//why x+1 and y+1:cuz first row and first col for empty
                        //string ^ ^
        
        for(int i=0;i<=x;i++)//<=x & <=y cuz s1[i-1] && s2[j-1]
        //basically to reach string last character we need size
        //of that string minus 1
        {
            for(int j=0;j<=y;j++)
            {
                if(i==0||j==0)
                {
                    C[i][j]=0;
                }
                else if(s1[i-1]==s2[j-1])
                {
                    C[i][j]=1+C[i-1][j-1];
                    
                }
                else
                {
                    C[i][j]=max(C[i][j-1],C[i-1][j]);
                }
            }
        }
        return C[x][y];
        // your code here
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends
