//https://leetcode.com/problems/implement-strstr/

class Solution {
public:
    void computelps(string needle,int m,int lps[])
    {
        int len=0;//length of previous longest prefix suffix
        lps[0]=0;
        int i=1;
        while(i<m)
        {
            if(needle[i]==needle[len])
            {
                len++;
                lps[i]=len;
                i++;
            }
            else
            {
                if(len!=0)
                {
                    //basically takes you at that pos backward where u check
                    //whether now needle[i]==needle[len]
                    len=lps[len-1];
                }
                else
                {
                    lps[i]=0;
                    i++;
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        
        
        //Method 2:KMP ALGO
        int n=haystack.size();//text
        int m=needle.size();//pattern
        int lps[m];
        computelps(needle,m,lps);
        int i=0,j=0;
        while(i<n)
        {
            if(needle[j]==haystack[i])
            {
                i++;
                j++;
            }
            if(j==m)
            {
                return i-j;//idhar no rest j=lps[j-1] as only one occurrence 
                //will be there
            }
            //i<n--> cuz upar i++ krenge toh yahan neeche if pe
            //dubara check krre
            else if(i<n && needle[j]!=haystack[i])
            {
                if(j!=0)
                {
                    j=lps[j-1];
                    
                }
                else
                {
                    i=i+1;
                }
                
            }
        }
        return -1;
        
        //Method 1:brute force  TC->O(n^2)  SC->O(1)
        /*if(needle.empty())
        {
            return 0;
        }
        int m=haystack.size(),n=needle.size();
        for(int i=0;i<=m-n;i++)
        {
            int j=0;
            for(;j<n;j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    break;
                }
            }
            if(j==n)
            {
                return i;//first occurrence of needle in haystack
                
            }
        }
        return -1;*/
    }
};
