//https://practice.geeksforgeeks.org/problems/closest-strings0611/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
	    
	    
	    int min_dis=INT_MAX;
	    int count1=-1,count2=-1;//any diff why -1 is taken over 0?
	    for(int i=0;i<s.size();i++)//how did initialization of i made a diff for diff test cases to work
	    {
	        if(s[i]==word1)
	        {
	            count1=i;
	        }
	        if(s[i]==word2)
	        {
	            count2=i;
	        }
	        if(count1!=-1 && count2!=-1)
	        {
	            min_dis=min(min_dis,abs(count1-count2));
	            //minimum distance b/w strings can be before also,so we need to store
	            //store the diff again & again and compare it with each other
	            //to get the minimum one
	        }
	    }
	    return min_dis;
		// Your code goes here
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
