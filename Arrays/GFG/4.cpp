//https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
            
        }
        for(int j=0;j<m;j++)
        {
            s.insert(b[j]);
        }
        return s.size();
        
        /*int i=0;
        int j=0;
        
        sort(a,a+n);
        sort(b,b+m);
        
        vector <int> arr;
        
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                arr.push_back(a[i]);
                i++;
            }
            else if(a[i]>b[j])
            {
                arr.push_back(b[j]);
                j++;
            }
            else
            {
                arr.push_back(a[i]);
                i++;
                j++;
            }
        }
        while(i<n)
        {
            arr.push_back(a[i]);
            i++;
            
        }
        while(j<m)
        {
            arr.push_back(b[j]);
            j++;
            
        }
        return arr.size();*/
        //code here
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
