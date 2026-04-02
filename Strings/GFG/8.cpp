//https://leetcode.com/problems/isomorphic-strings/solution/

class Solution {
public:
    //Method 1:using map
    /*bool helper(string s,string t)
    {
        unordered_map<char,char> m;
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])!=m.end())//if we find that char in map
            {
                if(m[s[i]]!=t[i])//and it is not mapped to same char as it was
                {
                    return false;
                    
                }
            }
            //agar map mei wo element nhi milta
            else
            {
                m[s[i]]=t[i];//toh mapping kr do
                //mapping each char in str 's' to that in str 't'
                
            }
        }
        return true;
        
    }*/
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        //return helper(s,t) && helper(t,s);->part of method 1: map sol
        //Method 2:using two arrays
        int m1[256]={0},m2[256]={0};//initialised space is 256(as whole ascii size is 256)
        for(int i=0;i<s.size();i++)
        {
            if(m1[s[i]]!=m2[t[i]])
            {
                return false;
            }
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;
    }
};
-------------------------------------------------------------------------------------------------------------------------------------------------------------------











//https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1#
// { Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        //using character array
        //TC->O(s.length())  SC->O(no. of diff characters)
        int n=str1.length();
        int m=str2.length();
        if(n!=m)//base case
        {
            return false;
        }
        int m1[256]={0};//map<char,char> m1
        int m2[256]={0};//map<char,char> m2
        for(int i=0;i<n;i++)
        {
            if(!m1[str1[i]] && !m2[str2[i]])//mapping of that char not done
            {
                m1[str1[i]]=str2[i];//s2[i] hashed value of m1[s1[i]]
                m2[str2[i]]=str1[i];
            }
            else if(m1[str1[i]]!=str2[i])//hashed value of m1[s1[i]] is not mapped 
            {                        //to s2[i] cuz m1[s1[i]] mapped to 
                return false;        //another s2[i]
            }
        }
        return true;
        
        // Your code here
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends
