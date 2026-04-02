//https://leetcode.com/problems/reshape-the-matrix/submissions/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        //another optimal sol:plsssssss do it
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)
        {
            return mat;
            
        }
        vector<vector<int>> ans(r,vector<int> (c));
        for(int i=0;i<m*n;i++)
        {
            ans[i/c][i%c]=mat[i/n][i%n];
            
        }
        return ans;
        
        
        
        //optimal sol:
        
        /*int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)
        {
            return mat;
            
            
        }
        vector<vector<int>> ans(r,vector<int>(c));
        int row=0,col=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[row][col]=mat[i][j];
                col++;
                if(col==c)
                {
                    row++;
                    col=0;//new row ke liye
                }
            }
        }
        return ans;*/
        
        //brute force:that I was applying but couldn't :)
        /*int m=mat.size();
        int n=mat[0].size();
        
        if(r*c>m*n || r*c<m*n)
        {
            return mat;
        }
        vector<int> v;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                v.push_back(mat[i][j]);
            }
        }
        int k=0;
        vector<vector<int>> newm(r,vector<int> (c,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                newm[i][j]=v[k];
                k++;
            }
        }
        return newm;*/
        
        
        
        
        
        
        
    }
};
