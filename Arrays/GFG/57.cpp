//https://leetcode.com/problems/minimum-index-sum-of-two-lists/solution/

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        vector<string> ans;
        unordered_map<string,int> m;
        
        for(int i=0;i<list1.size();i++)
        {
            m[list1[i]]=i;
        }
        int index_sum=0,min_index_sum=INT_MAX;
        for(int j=0;j<list2.size();j++)
        {
            if(m.find(list2[j])!=m.end())
            {
                index_sum=j+m[list2[j]];
                if(index_sum<min_index_sum)
                {
                    ans.clear();
                    ans.push_back(list2[j]);
                    min_index_sum=index_sum;
                }
                else if(index_sum==min_index_sum)
                {
                    ans.push_back(list2[j]);
                }
               
            }
        }
        return ans;
       
    }
};[-]
