//https://leetcode.com/problems/sum-of-digits-of-string-after-convert/description/

class Solution {
public:
    int getLucky(string s, int k) {
        string ans;
        for(int i=0;i<s.size();i++)
        {
            ans+=to_string(s[i]-'a'+1);
        }
        int res=0;
        while(k>0)
        {
            for(int i=0;i<ans.size();i++)
            {
                res+=ans[i]-'0';
                
            }
            ans=to_string(res);
            res=0;
            k--;
        }
        return stoi(ans);
    }
};
