//https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0,j=0,k=0;
        int temp[m+n];
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                temp[k]=nums1[i];
                i++;k++;
            }
            else
            {
                temp[k++]=nums2[j++];
            }
        }
        while(i<m)
        {
            temp[k]=nums1[i];
            i++;k++;
            
        }
        while(j<n)
        {
            temp[k]=nums2[j];
            j++;k++;
            
        }
        //nums1=temp;
        int len=m+n;
        for(int i=0;i<len;i++)
        {
            nums1[i]=temp[i];
        }
        
    }
};
