//https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1
// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string str;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]!=S[i+1])
            {
                str.push_back(S[i]);
                //str+=S[i];
              
            }
          
            
        }
        return str;
        // code here.
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends
