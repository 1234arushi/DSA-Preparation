//https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/submissions/

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        //method 1:
        for(int i=1;i<words.size();i++)//mentioned in ques-> i>0 && i<lenofword
        {
            string x=words[i];
            sort(x.begin(),x.end());
            string y=words[i-1];
            sort(y.begin(),y.end());
            if(x==y)
            {
                words.erase(words.begin()+i);//when we erase new indexing aa jaegi
                i--;
            }
        }
        return words;
        
        
        //my method:
        /*unordered_map<string,vector<string>> m;
        for(auto s:words)
        {
            string t=s;
            sort(t.begin(),t.end());
            
            m[t].push_back(s);
        }
       
        vector<string> ans;
        for(auto p:m)
        {
            //cout<<p.second[0]<<" ";
            ans.push_back(p.second[0]);
        }
        if(ans.empty())
        {
            return ans;
        }
        reverse(ans.begin(),ans.end());//why did i use reverse function
        return ans; */
    }
};
