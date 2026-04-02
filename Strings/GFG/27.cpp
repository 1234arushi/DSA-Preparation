//https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int result=0;
        for(char c:columnTitle)
        {
            int d=c-'A'+1;//to convert the letter to a number
            result=result*26+d;
        }
        return result;
        
    }
};
