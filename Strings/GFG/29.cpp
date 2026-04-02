//https://leetcode.com/problems/reverse-vowels-of-a-string/solution/

class Solution {
public:
    bool isvowel(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        
        int start=0;
        int end=s.size()-1;
        while(start<end)
        {
            while(start<s.size() && !isvowel(s[start]))
            {
                start++;
            }
            while(end>=0 && !isvowel(s[end]))
            {
                end--;
            }
            if(start<end)
            {
                swap(s[start++],s[end--]);
            }
        }
        return s;
        
    }
};
