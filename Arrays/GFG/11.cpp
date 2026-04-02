//https://practice.geeksforgeeks.org/problems/common-elements1132/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //method 2: what is it time complexity and space complexity
            vector<int> v;
            int i=0,j=0,k=0;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    v.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j])
                {
                    i++;//arrays are sorted in increasing order so if it is not
                    // equal to b[j]th element and a[i]<b[j] which means we might
                    //find the common element in a[i] as the next one would be greater
                    //element and it has the possibility to match
                }
                else if(B[j]<C[k])
                {
                    j++;
                    
                }
                else
                {
                    k++;
                }
                //checking if duplicate elements exist then increment them
                //so that they are counted/taken again
                int xx=A[i-1];
                while(A[i]==xx)
                {
                    i++;
                }
                
                int yy=B[j-1];
                while(B[j]==yy)
                {
                    j++;
                }
                
                int zz=C[k-1];
                while(C[k]==zz)
                {
                    k++;
                }
                
                
            }
            if(v.size()==0)
            {
                return {-1};
            }
            return v;
            
            //method 1:
            //finding common elements and counting duplicate values as one common elements among the three arrays
            /*vector<int> ans;
            unordered_map<int,int>m,m1,m2;
            for(int i=0;i<n1;i++)
            {
                m[A[i]]++;//hashing the arrays :using unordered maps
            }
            for(int i=0;i<n2;i++)
            {
                m1[B[i]]++;
            }
            for(int i=0;i<n3;i++)
            {
                m2[C[i]]++;
            }
            
            for(int i=0;i<n1;i++)
            {
                if(m[A[i]]>0 && m1[A[i]]>0 && m2[A[i]]>0)
                {
                    ans.push_back(A[i]);
                    m[A[i]]=0;//so that we don't duplicate values
                }
            }
            if(ans.empty())
            {
                return {-1};
            }
            return ans;//why we don't need to sort the vector here
            //how does vector works when returned to a function
           
            //what is the space complexity of this code?O(1) or O(n1+n2+n3)
            */
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
