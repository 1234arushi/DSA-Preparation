//https://leetcode.com/problems/jump-game-ii/submissions/

class Solution {
public:
    int jump(vector<int>& nums) {
        
        int jumps=0;
        int current=0;
        int farthest=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            farthest=max(farthest,nums[i]+i);//farthest index bta rha
            if(i==current)//jb humne saare possible paths explore kr liye
                         //uss ek particular index ke liye
            {
                current=farthest;
                jumps++;
            }
        }
        return jumps;
        
    }
};




---------------------------------------------------------------------------------------------------------------------------------------------------------------------



//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        
        //Method 2:
        
        int pos=0;//max steps that you can take
        int destination=0;//which possible 'i' to choose so
        //that you reach end of array
        int jump=0;
        for(int i=0;i<n-1;i++)//i==n-1 end of array
        {
            destination=max(destination,arr[i]+i);
            if(pos==i)//covered all the possibilities
            {
                jump++;
                if(destination<=i)
                {
                    return -1;
                }
                pos=destination;
            }
            
        }
        return jump;
        
        /*Method 1:TC->O(N) SC->O(1)
        if(n==1)
        {
            return 0;//0 no. of jumps
        }
        else if(arr[0]==0)//what about arr[i]==0?
        {
            return -1;
        }
        int maxr=arr[0];
        int step=arr[0];
        int jumps=1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                return jumps;
            }
            maxr=max(maxr,i+arr[i]);//exploring all the arr[i] that
            //will help to reach the end of array easily
            step--;
            if(step==0)//we'll explore all the arr[i]
            {
                jumps++;
                if(i>=maxr)//explain?? maybe for arr[i]==0
                {
                    return -1;
                }
                step=maxr-i;//choose that pos which will make
                //us reach end of array faster i.e we will
                //began taking steps steps from that pos only
            }
        }*/
       
        
        
        
        //my approaches:
        /*int i=0;
        vector<int>v;
        while(i<n-1)
        {
            i+=arr[i];
            v.push_back(arr[i]);
        }
        
        return v.size();*?
        /*int count=0;
        int i=0;
        while(i<n)
        {
            while(arr[i]!=0)
            {
                i++;
                arr[i]--;
            }
            count++;
        }
        return count;*/
        // Your code here
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
