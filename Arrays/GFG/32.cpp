//https://www.geeksforgeeks.org/minimum-swaps-required-sort-binary-array/
#include <iostream>
using namespace std;

int minswaps(int arr[], int n)
{
    int swaps=0;
    int unplaced_zeros=0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==0)
        {
            unplaced_zeros+=1;
        }
        else
        {
            swaps+=unplaced_zeros;
        }
    }
    return swaps;
}

int main() {
	int arr[] = {0, 0, 1, 0, 1, 0, 1, 1};
    cout<<minswaps(arr, 9);

	return 0;
}
