//https://leetcode.com/problems/repeated-substring-pattern/submissions/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //Method 2:Proof method:fold and find
        int size=s.size();
        string postfix=s.substr(1,size-1);
        string prefix=s.substr(0,size-1);
        string sfold=postfix+prefix;
        return sfold.find(s)!=string::npos;
        
        //Method 1:KMP---------NOT UNDERSTOOD
        /*int i=1,j=0,n=s.size();
        vector<int> dp(n+1,0);
        while(i<s.size())
        {
            if(s[i]==s[j])
            {
                dp[++i]=++j;
            }
            else if(j==0)
            {
                i++;
            }
            else
            {
                j=dp[j];
            }
        }
        return dp[n] && dp[n]%(n-dp[n])==0;*/
    }
};
