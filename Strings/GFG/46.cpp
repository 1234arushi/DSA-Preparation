//https://leetcode.com/problems/unique-morse-code-words/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
      
        string morse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",
        ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
        "...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(string str:words)
        {
            string temp="";
            for(char c:str)
            {
                temp+=morse[c-'a'];
                
            }
            s.insert(temp);
            
        }
        return s.size();        
    }
};
