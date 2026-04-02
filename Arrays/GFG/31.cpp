//https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    
    //method 3:https://www.geeksforgeeks.org/counting-inversions-using-set-in-c-stl/
    
    
    //method 2:Merge sort
    //TC->O(n log n) SC->O(n) 
    
    long long int merge(long long arr[],long long temp[],int low,int mid,int high)
    {
        //imp-> mid=mid+1
        long long inv_count=0;
        int i=low;
        int j=mid;
        int k=low;
        while(i<=mid-1 && j<=high)
        {
            if(arr[i]<=arr[j])
            {
                temp[k++]=arr[i++];
            }
            else
            {
                temp[k++]=arr[j++];
                inv_count+=mid-i;
            }
        }
        while(i<=mid-1)
        {
            temp[k++]=arr[i++];
        }
        while(j<=high)
        {
            temp[k++]=arr[j++];
        }
        for(int i=low;i<=high;i++)
        {
            arr[i]=temp[i];
        }
        return inv_count;
        
    }
    long long int mergesort(long long arr[],long long temp[],int low,int high)
    {
        int mid;
        long long int inv_count=0;
        if(low<high)
        
        {
            mid=(low+high)/2;//low+(high-low)/2
            //Inversion count will be sum of 
            //inversions in left-part, right-part and number 
            //of inversions in merging
            
            //+= cuz after merging this return val of a mergsort fun only
            inv_count+=mergesort(arr,temp,low,mid);
            inv_count+=mergesort(arr,temp,mid+1,high);
            inv_count+=merge(arr,temp,low,mid+1,high);
            
        }
        return inv_count;
        
    }
    long long int inversionCount(long long arr[],long long N)
    {
        long long int temp[N];
        long long int ans=mergesort(arr,temp,0,N-1);
        return ans;
    }
    
    /*Method 1:Merge sort
    //TC->O(n log n)  SC->O(n)
    void merge(long long arr[],long long temp[],long long low,long long mid,long long high,long long &ctr)
    
    {
        
       
        long long i=low,j=mid+1,k=low;
        
        while(i<=mid && j<=high)
        {
            if(arr[i]<=arr[j])
            {
                temp[k]=arr[i];
                i++;k++;
            }
            else
            {
                ctr+=(mid-i+1);
                temp[k]=arr[j];
                j++;k++;
                
            }
        }
        while(i<=mid)
        {
            temp[k]=arr[i];
            i++;k++;
        }
        while(j<=high)
        {
            temp[k]=arr[j];
            j++;k++;
        }
        for(int i=low;i<=high;i++)
        {
            arr[i]=temp[i];
        }
        
    }
    
    long long int mergesort(long long arr[],long long temp[],long long low,long long high,long long &ctr)
    {
        
        
        if(low<high)
        {
            long long mid=(low+high)/2;
            mergesort(arr,temp,low,mid,ctr);
            mergesort(arr,temp,mid+1,high,ctr);
            merge(arr,temp,low,mid,high,ctr);
            
        }
        
        
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long temp[N];
        long long int ctr=0;
        mergesort(arr,temp,0,N-1,ctr);
        return ctr;
        // Your Code Here
    }*/

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends
