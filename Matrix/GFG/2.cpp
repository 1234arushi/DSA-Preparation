//https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector <vector<int>> arr, int n, int m) {
	    
	    
	    
	    //Method 2:TC->O(m+n) SC->O(1)
	    //how TC is O(m+n)??
	    int j=m-1;
	    int row_index=0;//initialize 1st row as row with max 1s
	    for(int i=0;i<n;i++)
	    {
	        bool flag=false;//false for evry row
	        while(j>=0 && arr[i][j]==1)
	        {
	            j=j-1;
	            flag=true;
	        }
	        if(flag)
	        {
	            row_index=i;
	        }
	    }
	    //row_index not changed then it means that
	    //first row does not contain 1s or that first row has max 1s
	    //but we are returning -1 when our first row has 0 1s
	    // so for that we need to make sure that its last element=0
	    if(row_index==0 && arr[0][m-1]==0)
	    {
	        return -1;
	    }
	    return row_index;
	    
	    
	    
	    /*Method 1:TC->O(m*n)  SC->O(1)
	    int maxcount=INT_MIN;
	    int rowindex=0,count;
	    for(int i=0;i<n;i++)
	    {
	        count=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            {
	                count++;
	            }
	        }
	        if(count>maxcount)
	        {
	            maxcount=count;
	            rowindex=i;
	           
	        }
	    }
	    if(maxcount==0)//understood why maxcount taken instead of count
	    //because count=0 for every row whereas maxcount is not
	    {
	        return -1;
	    }
	    return rowindex;*/
	    
	    
	    // code here
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
