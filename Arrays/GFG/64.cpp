//https://leetcode.com/problems/height-checker/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        //another sol:TC-O(N)  SC->O(1) [not sure!!!!!!!!]
        int mismatch=0;
        //The heights range from 1 to 100
        //We can create an array of size 101 to store the occurrence of heights.
        vector<int> count(101,0);
        
        for(int i=0;i<heights.size();i++)
        {
            count[heights[i]]++;
            
        }
        
        int i=1,j=0;//j->iterator for heights vector
        //i->iterator for count vector
        while(i<101)
        {
            if(count[i]==0)
            {
                i++;
            }
            else//indexes that are heights =sorted already hai toh aise cmp kr rhe
            {
                if(i!=heights[j])
                {
                    mismatch++;
                }
                j++;count[i]--;
                
            }
        }
        return mismatch;
        
        //my sol:TC->O(n log n) SC->O(n)
        /*int count=0;
        vector<int> expected(heights.begin(),heights.end());
        sort(expected.begin(),expected.end());
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=expected[i])
            {
                count++;
            }
        }
        return count;*/
        
    }
};
