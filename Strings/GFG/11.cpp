//https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
   
  public:
    string longestPalin (string S) {
        
        //TC->??  SC->O(1)
        
        //substring odd/even does not depend on S length odd length string S can
        //have even or odd palindromic substring same goes for even length
        //string S
        
        int l,h;
        int start=0,end=1;//end->length of longest palindromic substring so far
        
        for(int i=1;i<S.length();i++)
        {
            //even substring
            l=i-1;
            h=i;
            while(l>=0 && h<S.length() && S[l]==S[h])
            {
                if(h-l+1>end)
                {
                    start=l;//start->initial index of palindromic substring
                    end=h-l+1;//end->length  of palindromic substring??
                }
                l--;
                h++;
            }
            
            //odd substring
            l=i-1;
            h=i+1;
            while(l>=0 && h<S.length() && S[l]==S[h])
            {
                if(h-l+1>end)
                {
                    start=l;
                    end=h-l+1;
                }
                l--;
                h++;
            }
        }
        return S.substr(start,end);
        
        // code here
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
