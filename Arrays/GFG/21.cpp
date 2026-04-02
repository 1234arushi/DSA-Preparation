//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/solution/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //Leetcode method 1:Kaden's algo
        int maxprofit=0;
        int profitsum=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            profitsum+=prices[i+1]-prices[i];
            if(profitsum>maxprofit)
            {
                maxprofit=profitsum;
            }
            else if(profitsum<0)
            {
                profitsum=0;
            }
            
            
        }
        return maxprofit;
        
        //Leetcode method 2:
        /*int minprice=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minprice)
            {
                minprice=prices[i];
            }
            else if(prices[i]-minprice>maxprofit)
            {
                maxprofit=prices[i]-minprice;
            }
        }
        return maxprofit;*/
        
           
        
        //time limit exceeded :Leetcode method 1
        /*int maxprofit=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                int profit=prices[j]-prices[i];
                if(profit>maxprofit)
                {
                    maxprofit=profit;
                }
            }
        }
        return maxprofit;*/
        
        
        
        //time limit exceeded:my code.........constraints
        /*int profit=0;
        int buy=0,sell=0;
        
        for(int i=0;i<prices.size()-1;i++)
        {
            buy=prices[i];
            sell=0;
            for(int j=i+1;j<prices.size();j++)
            {
                
                if(prices[j]>buy && prices[j]>sell)
                {
                    
                    sell=prices[j];
                }
                
            }
            if(sell==0)
            {
                profit=profit;
            }
            else
            {
                profit=max(profit,sell-buy);
                
            }
            
                
            
            
            
        }
        return profit;*/
        
        
    }
};
