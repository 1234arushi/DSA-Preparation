//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        //Method 4:XOR technique:Best sol
        
        int x1=0;
        int x2=0;
        for(int i=0;i<n-1;i++)//i=1 error as for vector start
                              //iteration with i=0
                              
       //0 xor any +ve integer:x = x
        {
            
            x1=x1^array[i];
        }
        
        for(int j=1;j<=n;j++)
        {
            x2=x2^j;
        }
        return (x1^x2);
        
        //Method 3:TC->O(n)  SC->O(1)???? !!not understod!!
       // ->Inorder to avoid integer overflow this 
        
        /*Method 2:TC->O(n) SC->O(1)
       // -->But there can be an overflow if n is large.
        
        int total=n*(n+1)/2;//sum of n natural no's(as no element is 
                                                   //duplicated in array)
        for(int i=0;i<n-1;i++)
        {
            total-=array[i];
        }
        return total;*/
        
        
        /*Method 1:TC->O(n log n) SC->O(1)
        sort(array.begin(),array.end());
        //i=0 to i<n bcz it contains 1 to N integers both inclusive in the array
        for(int i=0;i<n-1;i++)//why can't we use i=1,how range is deicded here
        {
            if(array[i]!=(i+1))
            {
                return (i+1);//wh curly braces...not req
            }
        }*/
        // Your code goes here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends
