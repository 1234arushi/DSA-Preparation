//https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        
        
        
        int i=0;
        int n=s.size();
        for(int j=0;j<=s.size();j++)
        {
            if(s[j]==' '||j==s.size())
            {
                
                int x=j;
                while(i<j)
                {
                    swap(s[i],s[j-1]);
                    i++;j--;
                    
                }
                i=x+1;
                //j=i;
            }
            
        }
        return s;
        
    }
};
