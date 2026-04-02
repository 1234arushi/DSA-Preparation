//https://leetcode.com/problems/truncate-sentence/

class Solution {
public:
    string truncateSentence(string s, int k) {
        int count_space=0;
        string str;
        int i;
        for(i=0;i<s.size();i++)
        {
            str+=s[i];
            if(s[i]==' ')
            {
                count_space++;
            }
            if(count_space==k)
            {
                break;
            }
            
        }
        if(s[i]==' ')
        {
            str.erase(str.begin()+i);
            
        }
        return str;
        
    }
};
