//https://leetcode.com/problems/word-pattern/
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char,int> m;
        unordered_map<string,int> m1;
        //The std::istringstream is a string class object which 
        //is used to stream the string into different variables
        
        //Once a std::istringstream object has been created, then the
        //string can be streamed and stored using the extraction 
        //operator(>>). The extraction operator will read until 
        //whitespace is reached or until the stream fails.
        
        istringstream in(s);string word;
        
        vector<string> v;
        while(in)
        {
            in>>word;
            if(in)
            {
                v.push_back(word);
                
            }
            
        }
     
        if(pattern.size()!=v.size())
        {
            
            return false;
        }
        
        for(int i=0;i<v.size();i++)
        {
            
            if(m[pattern[i]]!=m1[v[i]])
            {
                return false;
            }
            m[pattern[i]]=m1[v[i]]=i+1;
          
            
        }
        return true;
        
        
        
    }
};
