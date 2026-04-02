//https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string S)
{
    //TC:O(S)  SC:O(1)
    int c1=0,c2=0;
    for(int i=0;i<S.length();i++)
    {
        //010101
        if(i&1 && S[i]=='0')
        {
            c1++;//flips hoga
        }
        else if(i%2==0 && S[i]=='1')
        {
            c1++;
        }
        //101010
        else if(i&1 && S[i]=='1')
        {
            c2++;
        }
        else if(i%2==0 && S[i]=='0')
        {
            c2++;
        }
        
    }
    return min(c1,c2);
    // your code here
}
