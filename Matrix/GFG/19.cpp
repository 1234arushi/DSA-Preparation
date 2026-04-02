//https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        
        int r=matrix.size(),c=matrix[0].size();
        
        for(int i=0;i<r;i++)
        {
            sort(matrix[i].begin(),matrix[i].end());
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]!=j+1)
                {
                    return false;
                }
            }
           
        }
        return true;
        
    }
};
