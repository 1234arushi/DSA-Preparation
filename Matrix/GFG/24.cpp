//https://leetcode.com/problems/spiral-matrix-ii/description/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> v;
        for(int i=0;i<n*n;i++)
        {
            v.push_back(i+1);
        }
       
        int startrow=0,startcol=0,endrow=n,endcol=n,k=0;
        vector<vector<int>>m(n,vector<int> (n,0));
        while(startrow<endrow && startcol<endcol)
        {
            //firstrow
            for(int i=startcol;i<endcol;i++)
            {
                m[startrow][i]=v[k++];
            }
            startrow++;//pehle row complete hui

            //last col
            for(int i=startrow;i<endrow;i++)
            {
                m[i][endcol-1]=v[k++];
            }
            endcol--;//end col le liya

            //last row
            if(startrow<endrow)//means whether an inner row to be printed 
            //is present or not to be printed
            {
                for(int i=endcol-1;i>=startcol;i--)
                {
                    m[endrow-1][i]=v[k++];
                }
            }
            endrow--;

            //first inner-col
            if(startcol<endcol)
            {
                for(int i=endrow-1;i>=startrow;i--)
                {
                    m[i][startcol]=v[k++];
                }
            }
            startcol++;
        }
        return m;


        

        
    }
};
