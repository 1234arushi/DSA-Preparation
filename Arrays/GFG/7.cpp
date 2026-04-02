//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        //method 2:quicksort
        /*quicksort(arr,l,r);
        int partition(int arr[],int lb,int ub)
        {
            int pivot=arr[lb];
            int start=lb;
            int end=ub;
            while(start<end)
            {
                while(arr[start]<=pivot)
                {
                    start++;
                }
                while(arr[end]>pivot)
                {
                    end--;
                }
                if(start<end)
                {
                    swap(arr[start],arr[end]);
                }
            }
            swap(arr[lb],arr[end]);
            return end;//index of pivot correct position
        }
        quicksort(int arr[],int lb,int ub)
        {
            if(lb<ub)
            {
                int loc=partition(arr,lb,ub);
                quicksort(arr,lb,loc-1);
                quicksort(arr,loc+1,ub);
            }
        }
        return arr[k-1];*/
        
        //method 1:
        sort(arr,arr+l+r+1);
        return arr[k-1];
        //code here
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends
