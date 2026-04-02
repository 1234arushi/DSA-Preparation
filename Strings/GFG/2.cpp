//https://practice.geeksforgeeks.org/problems/encrypt-the-string-21117/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  //what about the case abac
    string encryptString(string S) {
        map<int,char>mp;
        mp[0]='0';
        mp[1]='1';
        mp[2]='2';
        mp[3]='3';
        mp[4]='4';
        mp[5]='5';
        mp[6]='6';
        mp[7]='7';
        mp[8]='8';
        mp[9]='9';
        mp[10]='a';
        mp[11]='b';
        mp[12]='c';
        mp[13]='d';
        mp[14]='e';
        mp[15]='f';
        int cnt=1,i,j,sum=0,len=S.size();
        
        string str="";
        for(i=0;i<len;i++)
        {
            if(S[i]==S[i+1])
            {
                cnt++;
                continue;
            }
            str.push_back(S[i]);
            while(cnt>0)
            {
                sum=cnt%16;
                str+=mp[sum];
                cnt=floor(cnt/16.0);
            }
            cnt=1;
        }
        reverse(str.begin(),str.end());
        return str;
        // code here
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.encryptString(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends
