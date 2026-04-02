//https://leetcode.com/problems/baseball-game/

class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        
        
        //stack based sol:
        stack<int> stk;
        for(string i:ops)
        {
            if(i=="C")
            {
                stk.pop();
            }
            else if(i=="D")
            {
                stk.push(2*stk.top());
            }
            else if(i=="+")
            {
                int value1=stk.top();
                stk.pop();
                int value2=stk.top();
                stk.push(value1);
                stk.push(value1+value2);
            }
            else
            {
                stk.push(stoi(i));
            }
        }
        int ans=0;
        while(stk.size()!=0)
        {
            ans+=stk.top();
            stk.pop();
        }
        return ans;
        
        //vector based solution:
        
        
        /*vector<int> ans;
        
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="C")
            {
                ans.pop_back();
            }
            else if(ops[i]=="D")
            {
                
                ans.push_back(2*ans.back());
            }
            else if(ops[i]=="+")
            {
                int a=ans.back();
                int b=*(&ans.back()-1);// * and & neccessary
                ans.push_back(a+b);
            }
            else
            {
                ans.push_back(stoi(ops[i]));
            }
        }
        return accumulate(ans.begin(),ans.end(),0);*/
        
    }
};
