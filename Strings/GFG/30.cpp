//https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int subsequence=0;
        for(int i=0;i<t.size();i++)
        {
            if(s[subsequence]==t[i])
            {
                subsequence++;
            }
        }
        if(subsequence==s.size())
        {
            return true;
        }
        return false;
        
    }
};
