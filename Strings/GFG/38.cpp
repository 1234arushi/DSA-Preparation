//https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) {
        int result=0;
        bool odd_count=false;
        unordered_map<char,int> m;
        for(auto c:s)
        {
            m[c]++;
        }
        for (auto m1:m)
        {
            if((m1.second%2)==0)
                
            {
                result+=m1.second;
            }
            else
            {
                odd_count=true;
                result+=m1.second-1;
               
            }
        }
        if(odd_count){
            result++;
        }
        return result;
        
    }
};
