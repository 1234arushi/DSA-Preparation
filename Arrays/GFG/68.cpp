//https://leetcode.com/problems/last-stone-weight/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq(stones.begin(),stones.end());
        //The element with the highest value is considered the highest 
        //priority element. 
        while(pq.size()>1)//jb ek ele hoga tb ni chlega
        {
            int x=pq.top();pq.pop();
            int y=pq.top();pq.pop();
            if(x>y)//jo hoga cuz priority queue
            {
                pq.push(x-y);
            }
        }
        //pq=0 when even elements
        return pq.empty()?0:pq.top();
        
    }
};
