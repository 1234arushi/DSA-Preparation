//https://leetcode.com/problems/toeplitz-matrix/
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        //another sol:similar to mine
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i-1][j-1]!=matrix[i][j])//if i=1 & j=1,then i>0&&j>0 not req
                {
                    return false;
                }
            }
        }
        return true;
        
        //my sol:runtime error
        
        /*int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(matrix[i][j]!=matrix[i+1][j+1] && i<n && j<m)
                {
                    return false;
                }
            }
        }
        
        return true;*/
    }
};
