//https://leetcode.com/problems/range-addition-ii/

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        
      
        
        //approach:
       /* 1)The result matrix is always going to be in the top-left of 
            the original matrix
        2)What cells will be increased by 1 for every range?
        -->All coordinates, where x <= minimum of prev x coordinates 
        and y <= minimum of prev y coordinates.
        3)That means, we need to continue updating the minimum value of  operators[i][1] and operators[i][0] bottom right corner
        4)The answer would be their multiplication*/
       
        int min_row=m;
        int min_col=n;
       for(int i=0;i<ops.size();i++)
       {
           if(ops[i][0]<min_row)
           {
               min_row=ops[i][0];
           }
           if(ops[i][1]<min_col)
           {
               min_col=ops[i][1];
           }
       }
        return min_row*min_col;
    }
};
