//https://leetcode.com/problems/license-key-formatting/

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        stack<char> schar;
        for(auto ch:s)
        {
            if(ch!='-')
            {
                schar.push(ch);
            }
        }
        string res;
        int cur=0;
        while(!schar.empty())
        {
            res+=toupper(schar.top());
            schar.pop();
            cur++;
            
            if(cur==k && !schar.empty())
            {
                res+='-';
                cur=0;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
