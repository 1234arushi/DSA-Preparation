//https://leetcode.com/problems/reverse-string-ii/

class Solution {
public:
    string reverseStr(string s, int k) {
        
        for(int i=0;i<s.size();i+=2*k)
        {
            reverse(s.begin()+i,min(s.begin()+i+k,s.end()));
        }
        return s;
        
        
        
        
       
        /*if(s.size()==2*k)
        {
            char temp=s[0];
            s[0]=s[1];
            s[1]=temp;
            return s;
        }
        return s;
        int cur=0;
        string res="";
        for(int i=0;i<s.size();i++)
        {
            res+=s[i];
            cur++;
            
            if(cur==2*k)
            {
                char temp=res[abs(cur-i-1)];
                res[abs(cur-i-1)]=res[abs(cur-i-1)+1];
                res[abs(cur-i-1)+1]=temp;
                
                
            }
            else if(i==s.size()-1 && cur>k)
            {
                char temp=res[abs(cur-i-1)];
                res[abs(cur-i-1)]=res[abs(cur-i-1)+1];
                res[abs(cur-i-1)+1]=temp;
                
                
            }
            else if(cur<k)
            {
                for(int i=0;i<cu)
            }
        }*/
        
    }
};
