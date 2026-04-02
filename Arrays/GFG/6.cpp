//https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {

        //Method 2:
        int count0=0,count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            switch(nums[i])
            {
                case 0:
                   count0++;
                   break;
                case 1:
                   count1++;
                   break;
                case 2:
                    count2++;
                    break;

            }
            
           
        }
        int i=0;
        while(count0--)
        {
            nums[i++]=0;
        }
        while(count1--)
        {
            nums[i++]=1;
        }
        while(count2--)
        {
            nums[i++]=2;
        }

        //Method 1:using dutch national flag algo
        /*int low=0,mid=0,high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==0)
            {
                swap(nums[low++],nums[mid++]);

            }
            else if(nums[mid]==2)
            {
                swap(nums[high--],nums[mid]);
            }
        }*/
        
    }
};

--------------------------------------------------------------------------------------------------------------------------------------------------------------------
//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
       
        /*Method 1:
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[mid],a[low]);
                low++;
                mid++;
                
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[mid],a[high]);
                
                high--;
                
                
            }
        }*/
        
        //Method 2:taking more time compared to above
        //counting sort TC:O(2N)
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            switch(a[i])
            {
                case 0:
                    count0++;
                    break;
                case 1:
                    count1++;
                    break; 
                case 2:
                    count2++;
                    break; 
                     
                
            }
        }
        int i=0;
        while(count0>0)
        {
            a[i++]=0;
            count0--;
        }
        while(count1>0)
        {
            a[i++]=1;
            count1--;
        }
        while(count2>0)
        {
            a[i++]=2;
            count2--;
        }
        // code here 
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
