//https://leetcode.com/problems/rotate-image/description/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=i;j<c;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c/2;j++)
            {
                swap(matrix[i][j],matrix[i][c-j-1]);
            }
        }
        
    }
};

---------------------------------------------------------------------------------------------------------------------------------------------------------------------
//ques-Given a square matrix, turn it by 90 degrees in clockwise direction without using any extra space/Turn an image by 90 degrees in clockwise direction 
#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

void rotateby90clock(int mat[R][C])
{
    //first step:transpose
    for(int i=0;i<R;i++)
    {
        for(int j=i;j<C;j++)//does'nt really affect when i==j,they will be at same pos after swap
        {
            swap(mat[i][j],mat[j][i]);
        }
    }



    //second step:reverse the rows(such that matrix is rotated by 90 in clockwise direction)
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C/2;j++)
        {
            swap(mat[i][j],mat[i][C-j-1]);
        }
    }


}

void printmatrix(int mat[R][C])
{
    cout<<"\nMatrix after rotating it by 90deg in clockwise direction:\n\n";
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int mat[R][C] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };

    cout<<"Original matrix:\n\n";
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

    rotateby90clock(mat);
    printmatrix(mat);
    return 0;


}
