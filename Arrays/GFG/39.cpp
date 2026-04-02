//https://leetcode.com/problems/plus-one/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        //method 2:
        vector<int> res;//space occupied by it?
        int carry=1;
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            int sum=carry+digits[i];
            carry=sum/10;
            res.push_back(sum%10);
        }
        //for number = 9 or 99 or 999
        if(carry)
        {
            res.push_back(1);
        }
        reverse(res.begin(),res.end());//as elemenst pushed in vectors from back
        return res;
        
        
        //method 1:
        
        /*int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
            }
            else
            {
                digits[i]++;
                return digits;
            }
        }
        //if number = 9 or 99 or 999
        digits[0]=1;//as '1' would be left and all zeros will be covered 
        //for it in the loop
        
        //as we took 0th index for '1' then a '0' is removed so we add it back
        digits.push_back(0);
        return digits;*/
    }
};
