//https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing2704/1#
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        
        //TC->O(N)  SC->O(1)
        int open=0,close=0,swaps=0,unbalanced=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='[')
            {
                open++;
                if(unbalanced>0)//if >0 was not there then what would have happen?
                {
                    swaps+=unbalanced;
                    unbalanced--;
                    
                }
                
            }
            else
            {
                close++;
                unbalanced=close-open;
            }
        }
        return swaps;
        
        // code here 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends
