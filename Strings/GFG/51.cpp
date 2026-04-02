//https://leetcode.com/problems/student-attendance-record-i/

class Solution {
public:
    bool checkRecord(string s) {
        //method 2:
        return s.find("LLL")==string::npos && count(s.begin(),s.end(),'A')<=1;
        
        //method 1:
        
        /*int a=0,l=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            if(s[i]=='L')
            {
                l++;
            }
            else
            {
                l=0;//this will help in counting only consecutive L's
            }
            if(a>=2||l>2)
            {
                return false;
            }
        }
        return true;*/
        
        //my method:
        /*unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
            {
                return false;
            }
            else if(s[i]=='A')
            {
                m[s[i]]++;
                if(m[s[i]]>=2)
                {
                    return false;
                }=
            }
        }
        return true;*/
        
        
    }
};
