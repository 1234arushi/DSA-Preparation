//https://leetcode.com/problems/shortest-completing-word/

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
      
        vector<int> lic(26,0);
        for(auto ch:licensePlate)
        {
            if(isalpha(ch))//if it's alphabet
            {
                lic[tolower(ch)-'a']++;
                //at particular index pe freq store krra
            }
        }
        int ans=INT_MAX;
        string res;
        for(auto& str :words)//first string in words vector=words[0]
        {
            vector<int> strr(26,0);
            for(auto ch:str)
            {
                strr[ch-'a']++;
            }
            bool complete=true;
            for(int i=0;i<26;i++)
            {
               if(strr[i]<lic[i])
               {
                   complete=false;
                   break;
               }
            }
           if(complete && str.size()<ans)
           {
               res=str;
               ans=str.size();
           }
        }
        return res;
        
            
        
    }
};
