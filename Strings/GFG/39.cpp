//https://leetcode.com/problems/number-of-segments-in-a-string/

class Solution {
public:
    int countSegments(string s) {
        int count_segment=0;
        //int space=0;
        /*if(s.empty())
        {
            return 0;
        }*/ 
        s.push_back(' ');
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==' ' && s[i-1]!=' ')
            {
                count_segment++;
                //space++;
            }
        }
       /* if(space==s.size())
        {
            return 0;
        }*/
        return (count_segment);
        
    }
};
