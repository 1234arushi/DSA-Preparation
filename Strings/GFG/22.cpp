//https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            m[s[i]]++;
        }
        int len2=t.length();
        if(len!=len2)
        {
           
            return false;
        }
        for(int i=0;i<len;i++)
        {
            if(m[t[i]]>0)
            {
                m[t[i]]-=1;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
};
