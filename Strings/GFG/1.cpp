//LEETCODE-
//https://leetcode.com/problems/reverse-string/submissions/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        
        for(int i=0;i<n/2;i++)
        {
            char c=s[i];
            s[i]=s[n-i-1];
            s[n-i-1]=c;
            
        }
        
    }
};



//GFG-
//https://practice.geeksforgeeks.org/problems/reverse-a-string/1


// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    int n=str.length();
    for(int i=0;i<(n/2);i++)
    {
        int temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    return str;
    
  //Your code here
}
