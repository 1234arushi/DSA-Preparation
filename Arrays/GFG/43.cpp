//https://leetcode.com/problems/pascals-triangle-ii/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        //another sol:
        vector<int> v(rowIndex+1);
        v[0]=v[rowIndex]=1;
        
        long temp=1;
        for(int i=1,up=rowIndex,down=1;i<rowIndex;i++,up--,down++)
        {
            temp=temp*up/down;
            v[i]=temp;
            
        }
        return v;
        
        
        //my sol:
        
        /*int size=rowIndex+1;
        vector<vector<int>> v(size);
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                    v[i].push_back(1);
                }
                else
                {
                    v[i].push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
        }
        return v[rowIndex];*/
        
        
    }
};
