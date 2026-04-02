//https://leetcode.com/problems/merge-intervals/submissions/846390765/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        //Leetcode Solution:
        vector<vector<int>> merged;
        sort(intervals.begin(),intervals.end());//default sort from first elem
        for(auto interval:intervals)
        {
            if(merged.empty()||merged.back()[1]<interval[0])
            {
                merged.push_back(interval);
            }
            else
            {
                merged.back()[1]=max(merged.back()[1],interval[1]);
            }
        }
        return merged;

        //My method:
        //intervals =[[1,4],[0,4]]--->eg why we need sorting
        /*sort(intervals.begin(),intervals.end());
        stack<vector<int>>st;
        for(int i=0;i<intervals.size();i++)
        {
           if(st.empty())
           {
               st.push(intervals[i]);
           }
           else
           {
               vector<int> temp=st.top();
               if(temp[1]>=intervals[i][0])
               {
                   st.pop();
                   int mx=max(intervals[i][1],temp[1]);
                   st.push({temp[0],mx});
               }
               else
               {
                   st.push(intervals[i]);
               }
               
           }
           
        }
        vector<vector<int>> merge;
        while(!st.empty())
        {
            merge.push_back(st.top());
            st.pop();
        }
        reverse(merge.begin(),merge.end());
        return merge;*/

        
    }
};
