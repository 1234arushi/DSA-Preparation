//https://leetcode.com/problems/add-binary/submissions/

class Solution {
public:
    string addBinary(string a, string b) {
        
        //another discussion sol:
        string res;
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        while(i>=0 || j>=0)
        {
            int sum=carry;
            if(i>=0)
            {
                // we subtract by '0' to convert the numbers from a char type 
                //into an int, so we can perform operations on the numbers
                sum+=a[i--]-'0';
            }
            if(j>=0)
            {
                sum+=b[j--]-'0';
            }
            carry=sum>1?1:0;//carry ki value hai
            res+=to_string(sum%2);
        }
        if(carry)//if at last carry still equals 1
        {
            res+=to_string(carry);
            
        }
        reverse(res.begin(),res.end());
        return res;
        
        //youtube method:
        /*int alen=a.size(),blen=b.size();
        int i=0,carry=0;
        string ans="";
        while(i<alen || i<blen || carry!=0)
        {
            int x=0;
            if(i<alen && a[alen-i-1]=='1')
            {
                x=1;
            }
            int y=0;
            if(i<blen && b[blen-i-1]=='1')
            {
                y=1;
            }
            ans=to_string((x+y+carry)%2)+ans;
            carry=(x+y+carry)/2;
            i+=1;
            
        }
        return ans;*/
        
        
        
    }
};
