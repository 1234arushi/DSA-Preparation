//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) { 
        
     
       //TC->O(n) SC->O(n)
        unordered_map<int,int> m;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int b=k-arr[i];
            if(m[b])
            {
                count+=m[b];
            }
            m[arr[i]]++;
        }
        return count;
        
        
        /*int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int sum=arr[i]+arr[j];
                if(sum==k)
                {
                    count++;
                }
            }
            
        }
        return count;*/
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends
