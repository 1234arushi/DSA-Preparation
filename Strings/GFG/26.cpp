//https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        
      
        
        int left=0,right=s.size()-1;
        while(left<right)
        {
            //if number is not alphanumeric we will increase the left pointer
            if(!isalnum(s[left]))
            {
                left++;
            }
            //if number is not alphanumeric we will decrease the right pointer
            else if(!isalnum(s[right]))
            {
                right--;
            }
            
            //tolower is the function which coverts the string into lowercases
            else if(tolower(s[left])!=tolower(s[right]))
            {
                return false;
            }
            else
            {
                left++;
                right--;
            }
        }
        return true;
        
    }
};
