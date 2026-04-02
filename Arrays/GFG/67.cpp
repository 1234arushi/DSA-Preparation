//https://leetcode.com/problems/flipping-an-image/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int r=image.size();
        int c=image[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c/2;j++)
            {
                swap(image[i][j],image[i][c-j-1]);
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(image[i][j]==0)
                {
                    image[i][j]=1;
                }
                else
                {
                    image[i][j]=0;
                }
            }
        }
        return image;
        
        
    }
};
