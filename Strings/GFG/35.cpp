//https://leetcode.com/problems/add-strings/
class Solution {
public:
    string addStrings(string num1, string num2) {
        //another method
        
        string ans="";
        int i=num1.size()-1,j=num2.size()-1,carry=0;
        while(i>=0 || j>=0 || carry>0)
        {
            if(i>=0)
            {
                carry+=num1[i--]-'0';
            }
            if(j>=0)
            {
                carry+=num2[j--]-'0';
                
            }
            ans+=char(carry%10+'0');
            carry/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        /*int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string res="";
        while(i>=0||j>=0)
        {
            if(i>=0)
            {
                carry+=num1[i--]-'0';//char to int
            }
            if(j>=0)
            {
                carry+=num2[j--]-'0';
            }
            res=to_string(carry%10)+res;
            carry/=10;
        }
        return carry?"1"+res:res;//why "1"?
        */
        
        
        //runtime error
        
       /* int n1=stoi(num1);
        int n2=stoi(num2);
        int sum=n1+n2;
        return (to_string(sum));*/
        
    }
};
