//https://leetcode.com/problems/matrix-diagonal-sum/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int r=mat.size(),c=mat[0].size();
        int sum=0;
        int i,j;
        for(i=0;i<r;i++)
        {
            if(i!=r-i-1)
            {
                sum+=mat[i][r-i-1];
            }
            sum+=mat[i][i];//no use of else condition
            
        }
        return sum;
        
    }
};
