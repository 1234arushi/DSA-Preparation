//https://leetcode.com/problems/maximum-units-on-a-truck/

class Solution {
public:
    
    static bool cmp(vector<int> &a,vector<int>&b)
    {
        return a[1]>b[1];//increasing order sort
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int units=0;
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        
        for(auto box:boxTypes)
        {
            if(truckSize<=0)
            {
                break;
            }
            units+=min(box[0],truckSize)*box[1];
            truckSize-=box[0];
        }
       return units;
        /*int sum=0,units=0,x=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            for(int j=0;j<boxTypes[0].size();j++)
            {
                if(sum<=truckSize && boxTypes[0][j]<truckSize)
                {
                    sum+=boxTypes[0][j];
                    cout<<sum<<" ";
                    units+=boxTypes[i][0]*boxTypes[0][j];
                }
            }
        }
        
        if(sum<truckSize)
        {
           
            x=truckSize-sum;
            if(x<=boxTypes[0][boxTypes.size()-1])
            {
                units+=x*boxTypes[0][boxTypes.size()-1];
                
            }
            
        }
        return units;*/
    }
};
