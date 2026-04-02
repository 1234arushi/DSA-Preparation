//https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1#
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char,int> umap={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int num=0;
        for(int i=0;i<str.length();i++)
        {
            if(i+1<str.size() && umap[str[i+1]]>umap[str[i]])
            {
                num+=umap[str[i+1]]-umap[str[i]];
                i++;
            }
            else 
            {
                num+=umap[str[i]];
            }
        }
        return num;
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends
