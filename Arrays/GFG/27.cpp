//https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //two pointer:
        sort(A,A+n);
        //finding pairs for each fixed ele A[i] by binary search
        for(int i=0;i<n-2;i++)
        {
            int l=i+1,h=n-1;//new low and high for
            //every fixed ele A[i]
            while(l<h)//->finding pairs for A[i]
            {
                if(A[i]+A[l]+A[h]==X)
                {
                    return true;
                }
                else if(A[i]+A[l]+A[h]<X)
                {
                    l++;
                }
                else
                {
                    h--;
                }
            }
        }
        return false;
        //map method:
        /*unordered_map<int,int> m;
        
        for(int i=0;i<n;i++)
        {
            int x=A[i];
            for(int j=i+1;j<n;j++)
            {
                int y=A[j];
                int sum=X-(x+y);
               
                if(m.find(sum)!=m.end())
                {
                    return true;
                }
               
                //4 3
                //1 2 2 1
            }
             m[A[i]]++;
        }
        return false;*/
        //Your Code Here
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends
