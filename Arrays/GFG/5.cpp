//https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        
        //method 3:
        int k=0,m=n;
        int i=0,j=n-1;
        int temp[n];
        while(i<n || j>=0)
        {
            if(arr[i]>0)
            {
                temp[k++]=arr[i++];
            }
            else
            {
                i++;
            }
            if(arr[j]<0)
            {
                temp[m-1]=arr[j--];
                m--;
            }
            else
            {
                j--;
            }
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=temp[i];
        }
        
        /*method 2:array
        int temp[n];
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                temp[k++]=arr[i];
            }
            
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                temp[k++]=arr[i];
            }
            
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=temp[i];
            
        }*/
        
        //method 1:using vectors
        /*vector<int> v;
        //diff loops so that the all positive num are together
        //and all negative numbers are together
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=v[i];//v.at(i);
        }*/
        // Your code goes here
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends
