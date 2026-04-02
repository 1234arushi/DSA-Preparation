//https://practice.geeksforgeeks.org/problems/three-way-partitioning/1#
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        
        //efficient approach: TC->O(n)  SC->O(1)
        //Dutch national flag algo
        int low=0;
        int mid=0;
        int high=array.size()-1;
        while(mid<=high)
        {
            if(array[mid]<a)
            {
                swap(array[low],array[mid]);
                low++;mid++;
            }
            else if(array[mid]>=a && array[mid]<=b)
            {
                mid++;
            }
            else if(array[mid]>b)
            {
                swap(array[mid],array[high]);
                high--;
            }
        }
        
        //my method:TC:O(n),SC:O(n)
        /*vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for(int i=0;i<array.size();i++)
        {
            if(array[i]<a)
            {
                v1.push_back(array[i]);
            }
            
            else if(array[i]<=b && array[i]>=a)
            {
                v2.push_back(array[i]);
            }
            else if(array[i]>b)
            {
                v3.push_back(array[i]);
            
            }
        }
        int i=0,j=0,k=0;//vector iterator i->v1,j->v2,k->v3
        int len1=v1.size();
        int len2=v2.size();
        int len3=v3.size();
        int v=0;//array vector ka iterator
        while(len1--)
        {
            array[v++]=v1[i++];
        }
        while(len2--)
        {
            array[v++]=v2[j++];
        }
        while(len3--)
        {
            array[v++]=v3[k++];
        }*/
        
            
        
        // code here 
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        
        vector<int> array(N);
        unordered_map<int,int> ump;
        
        for(int i=0;i<N;i++){
            cin>>array[i];
            ump[array[i]]++;
        }
        
        int a,b;
        cin>>a>>b;
        
        vector<int> original = array;

        int k1=0,k2=0,k3=0;
        int kk1=0;int kk2=0;int kk3=0;
        
        for(int i=0; i<N; i++)
        {
            if(original[i]>b)
                k3++;
            else if(original[i]<=b and original[i]>=a)
                k2++;
            else if(original[i]<b)
                k1++;
        }
        
        Solution ob;
        ob.threeWayPartition(array,a,b);
      
        for(int i=0;i<k1;i++)
        {
            if(array[i]<b)
            kk1++;
        }
        
        for(int i=k1;i<k1+k2;i++)
        {
            if(array[i]<=b and array[i]>=a)
            kk2++;
            
        }
        
        for(int i=k1+k2;i<k1+k2+k3;i++)
        {
            if(array[i]>b)
            kk3++;
        }
        bool ok = 0;
        if(k1==kk1 and k2 ==kk2 and k3 == kk3)
            ok = 1;
        
        for(int i=0;i<array.size();i++)
            ump[array[i]]--;
        
        for(int i=0;i<array.size();i++)
            if(ump[array[i]]!=0)
                ok=0;
        
        if(ok)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        
    }
    
    return 0;
}
  // } Driver Code Ends
