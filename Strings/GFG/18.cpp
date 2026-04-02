//https://practice.geeksforgeeks.org/problems/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/1/#// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        
        int count0=0,count1=0,cnt=0;
        
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
            if(count0==count1)
            {
                cnt++;
            }
        }
        if(count0!=count1)
        {
            return -1;
        }
        return cnt;
        //Write your code here
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends
