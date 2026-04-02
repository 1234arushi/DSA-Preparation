//https://www.geeksforgeeks.org/common-elements-in-all-rows-of-a-given-matrix/
#include <bits/stdc++.h>
using namespace std;
#define M 4
#define N 5

void printCommonElements(int mat[M][N])
{
    unordered_map<int,int> umap;
    for(int j=0;j<N;j++)
    {
        umap[mat[0][j]]=1;
    }
    
    
    for(int i=1;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            //If it is present in the map and is not duplicated in current row
            //we increment count of the element in map by 1 
            //else we ignore the element.
            if(umap[mat[i][j]]==i)
            {
                umap[mat[i][j]]=i+1;
                
                //if the below  condition satisfies then it 
                //means element  has appeared m-1 times before. 
                if(i==M-1 && umap[mat[i][j]]==M)
                {
                    cout<<mat[i][j]<<" ";
                }
            }
        }
    }
}
int main() {
    
	int mat[M][N] =
    {
        {1, 2, 1, 4, 8},
        {3, 1, 8, 5, 1},
        {8, 7, 1, 3, 1},
        {8, 1, 2, 1, 9},
    };
 
    printCommonElements(mat);
    //above matrix will not print 1,1,8 the code or ques ask for unique 
    //common elements
 
    
	return 0;
}
