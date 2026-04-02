//https://leetcode.com/problems/ransom-note/submissions/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> m;
        for(int i=0;i<magazine.size();i++)
        {
            m[magazine[i]]++;
        }
        int len=0;
        for(int i=0;i<ransomNote.size();i++)
        {
            if(m[ransomNote[i]])
            {
                len++;
                m[ransomNote[i]]--;
                
            }
        }
        if(len==ransomNote.size())
        {
            return true;
        }
        return false;
        
    }
};
