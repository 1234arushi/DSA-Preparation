//https://leetcode.com/problems/detect-capital/

class Solution {
public:
    bool detectCapitalUse(string word) {
        //method 3:try another sol!!!!!!!!!!!!!!!!!!!!
        
        //method 2:shortening method 1
        int n=word.length();
        if(n==1)
        {
            return true;
        }
        //CASE 1:All letters in this word are capitals, like "USA".
        if(isupper(word[0])&&isupper(word[1]))
        {
            for(int i=2;i<n;i++)
            {
                if(islower(word[i]))
                {
                    return false;
                }
            }
        }
        //CASE 2:All letters in this word are not capitals, like "leetcode".
         //CASE 3:Only the first letter in this word is capital, like "Google".
        else
        {
            for(int i=1;i<n;i++)
            {
                if(isupper(word[i]))
                {
                    return false;
                }
            }
        }
        return true;
        //method 1:
        /*int n=word.size();
        bool match1=true,match2=true,match3=true;
        //CASE 1:All letters in this word are capitals, like "USA".
        for(int i=0;i<n;i++)
        {
            if(!(isupper(word[i])))
            {
               match1=false;
                break;
            }
        }
        if(match1)
        {
            return true;
        }
        //CASE 2:All letters in this word are not capitals, like "leetcode".
        for(int i=0;i<n;i++)
        {
            if(!(islower(word[i])))
            {
                match2=false;
                break;
            }
        }
        if(match2)
        {
            return true;
        }
        //CASE 3:Only the first letter in this word is capital, like "Google".
        if(!(isupper(word[0])))
        {
            match3=false;
        }
        if(match3)
        {
            for(int i=1;i<n;i++)
            {
                if(!(islower(word[i])))
                {
                    match3=false;
                    break;
                }
            }
        }
        if(match3)
        {
            return true;
        }
        return false;*/
        
        
    }
};
