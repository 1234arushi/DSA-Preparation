https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
    int countmidlessorequal(vector<int>&matrix,int mid)
    {
        int low=0;
        int high=matrix.size()-1;
        while(low<=high)
        {
            int m=low+(high-low)/2;
            
            if(matrix[m]>mid)
            {
                high=m-1;
            }
            else
            {
                low=m+1;
            }
        }
        return low;
    }
public:
    int median(vector<vector<int>>&matrix, int r, int c){
        
        //Efficient approach: TC->O()
        
        int min=INT_MAX,max=INT_MIN;
        for(int i=0;i<r;i++)
        {
            if(matrix[i][0]<min)//finding the min element
            {
                min=matrix[i][0];
            }
            if(matrix[i][c-1]>max)//finding the maximum element
            {
                max=matrix[i][c-1];
            }
        }
        int desired=(r*c+1)/2;//median=(n+1)/2 for n=odd
       
        //binary search
        while(min<max)
        {
            int mid=min+(max-min)/2;
            int count=0;
            //finding the count of elements less than or equal to mid
            for(int i=0;i<r;++i)
            {
                count+=countmidlessorequal(matrix[i],mid);
                //count+=upper_bound(matrix[i],matrix[i]+c,mid)-matrix[i];
                
            }
            if(count<desired)
            {
                min=mid+1;//median is greater than selected no(mid)
            }
            else
            {
                max=mid;//median is less than or equal to selected no(mid)
            }
        }
        return min;
        
        /*Naive approach: TC->O(r*c log(r*c) SC->O(r*C)
        
        vector<int> v;
       
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int x=r*c;
        int med=(x+1)/2;
        return v[med-1];*/
        
        
        
        // code here          
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends
