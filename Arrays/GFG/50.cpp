//https://leetcode.com/problems/island-perimeter/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int perimeter=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    perimeter+=4;
                    
                    //checking the directions
                    
                    //if upward "1" exists
                    if(i-1>=0 && grid[i-1][j]==1)
                    {
                        perimeter--;
                    }
                    
                    //if downward "1" exists
                    if(i+1<grid.size() && grid[i+1][j]==1)
                    {
                        perimeter--;
                    }
                    
                    //if leftward "1" exists
                    if(j-1>=0 && grid[i][j-1]==1)
                    {
                        perimeter--;
                    }
                    
                    //if rightward "1" exists
                    if(j+1<grid[0].size() && grid[i][j+1]==1)
                    {
                        perimeter--;
                    }
                    
                }
                
            }
        }
        return perimeter;
        
    }
};
