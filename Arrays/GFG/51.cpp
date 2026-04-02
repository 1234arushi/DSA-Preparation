//https://leetcode.com/problems/keyboard-row/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        string first_row="QWERTYUIOPqwertyuiop",second_row="ASDFGHJKLasdfghjkl",third_row="ZXCVBNMzxcvbnm";
        int f=0,s=0,t=0;
        vector<string> ans;
        for(auto i:words)
        {
            for(auto j:i)
            {
                if(first_row.find(j)!=string::npos)//char found in first row
                {
                    f++;
                }
                if(second_row.find(j)!=string::npos)//char found in first row
                {
                    s++;
                }
                if(third_row.find(j)!=string::npos)//char found in first row
                {
                    t++;
                }
            }
            //pehle word ka size
            if(i.size()==max({f,s,t}))
            {
                ans.push_back(i);//push that word
            }
            f=0,s=0,t=0;
        }
        
        return ans;
        
       /* vector<string> ans;
        unordered_set <char> first_row({'q','w','e','r','t','y','u','i','o','p'});
        unordered_set <char>second_row({'a','s','d','f','g','h','j','k','l'});
        unordered_set <char>third_row({'z','x','c','v','b','n','m'});
        
        for(auto &word:words)
        {
            bool d1=true,d2=true,d3=true;
            for(auto &ch:word)
            {
                if(d1)
                {
                    auto it=first_row.find(ch);
                    if(it==first_row.end())
                    {
                        d1=false;
                    }
                }
                if(d2)
                {
                    auto it=second_row.find(ch);
                    if(it==second_row.end())
                    {
                        d2=false;
                    }
                }
                if(d3)
                {
                    auto it=third_row.find(ch);
                    if(it==third_row.end())
                    {
                        d3=false;
                    }
                }
            }
            if(d1||d2||d3)
            {
                ans.push_back(word);
            }
        }
        return ans;*/
    }
};
