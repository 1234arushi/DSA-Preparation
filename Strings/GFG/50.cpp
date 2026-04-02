//https://leetcode.com/problems/check-if-the-sentence-is-pangram/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        //method 2->using set:
        unordered_set<char> seen(sentence.begin(),sentence.end());
        return seen.size()==26;
        
        //method 1:
        /*vector<int> freq(26);
        for(auto ch:sentence)
        {
            freq[ch-'a']++;
        }
        for(auto i:freq)
        {
            if(i==0)
            {
                return false;
            }
        }
        return true;*/
        
        //my method:
        /*int freq[26];
        unordered_map<char,int> m;
        for(int i=0;i<sentence.size();i++)
        {
            m[sentence[i]]++;
            
        }
        for(int i=0;i<sentence.size();i++)
        {
            freq[sentence[i]-'a']=m[sentence[i]];
            
        }
        
        for(int i=0;i<26;i++)
        {
           if(freq[i]==0)
           {
              return false;
           }
        }
        return true;*/
        
        
    }
};
