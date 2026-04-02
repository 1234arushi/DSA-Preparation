//https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    
 
    //TC->O(n) SC->O(n)
    vector<int> duplicates(int arr[], int n) {
        
        
        vector<int> v;
        //int flag=-1;
        
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]++;
        }
        for(auto x:umap)
        {
            if(x.second>1)
            {
                //flag=0;
                v.push_back(x.first);
            }
        }
        
        if(v.empty())
        {
            v.push_back(-1);
        }
        else
        {
            sort(v.begin(),v.end());//why sortinggggggggg
            
        }
        return v;
        /*if(flag==0)
        {
            sort(v.begin(),v.end());//why sorting??
            return v;//how does vector return its values
            
        }
        else
        {
            return {-1};
        }*/
        
        // code here
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
