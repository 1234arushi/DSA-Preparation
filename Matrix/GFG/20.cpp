//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int count_neg=0;
        int m=grid.size(),n=grid[0].size();
        for(int i=0,h=n-1;i<m;i++)
        {
            int l=0;
            while(l<=h)
            {
                int mid=l+(h-l)/2;
                if(grid[i][mid]<0)
                {
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            count_neg+=n-l;
        }
        return count_neg;
        
    }
};
