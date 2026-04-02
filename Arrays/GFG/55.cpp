//https://leetcode.com/problems/distribute-candies/solution/
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        unordered_map<int,int> m;
        for(int i=0;i<candyType.size();i++)
        {
            m[candyType[i]]++;
        }
        int n=candyType.size();
        int eat=n/2;
        if(m.size()>=eat)
        {
            return eat;
        }
        return m.size();
            
        
        
    }
};
