//https://leetcode.com/problems/relative-ranks/

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        //using priority queue:
        
       vector<int> v(score.begin(),score.end());//copy score elements in v
       sort(v.begin(),v.end(),greater<>());
       vector<string> ans;
       unordered_map<int,int> m;
       for(int i=0;i<v.size();i++)
       {
           m[v[i]]=i;
       }
        
        for(int i=0;i<score.size();i++)
        {
            int index=m[score[i]];
            if(index==0)
            {
                ans.push_back("Gold Medal");
            }
            else if(index==1)
            {
                ans.push_back("Silver Medal");
            }
            else if(index==2)
            {
                ans.push_back("Bronze Medal");
            }
            else
            {
                ans.push_back(to_string(index+1));
            }
        }
        return ans;
        
    }
};
