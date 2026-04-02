//https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#
// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        //TC->O(N* S log S):
        //N->length of string list
        //S->length of strings in string list
        //N->one time traveersal through string list
        //S log S->sorting
                                                    
        //SC->O(N)  :for N words in a string but for vector of vectors SC??                                         
        
        map<string,vector<string>> map;//ordered_map for lexicographic
        
        for(int i=0;i<string_list.size();i++)
        {
            string temp=string_list[i];
            sort(temp.begin(),temp.end());
            map[temp].push_back(string_list[i]);
            
        }
        vector<vector<string>> ans;
        for(auto it:map)
        {
            ans.push_back(it.second);
        }
        return ans;
        //code here
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
