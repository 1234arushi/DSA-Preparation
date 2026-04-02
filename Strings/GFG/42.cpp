//https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/submissions/

class Solution {
public:
    int countGoodSubstrings(string s) {
        
        //Method 2:sliding window
        int count=0;
        int dup=0;
        if(s.size()<3)
        {
            return 0;
        }
        int mp[26]={0};//hash array
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]-'a']++;
            if(mp[s[i]-'a']==2)
            {
                dup++;
            }
            if(i<2)
            {
                continue;
            }
            if(dup==0)
            {
                count++;
            }
            //sliding
            mp[s[i-2]-'a']--;
            if(mp[s[i-2]-'a']==1)
            {
                dup--;
            }
        }
        return count;
        
        
        //Method 1:
        /*int count=0;
       //base condition
        if(s.size()<3)
        {
            return 0;
        }
        for(int i=0;i<=s.size()-3;i++)
        {
            if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2])
            {
                count++;
            }
        }
        return count;*/
    }
};
