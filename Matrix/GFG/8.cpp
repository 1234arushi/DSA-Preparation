//ques-Given a square matrix, turn it by 90 degrees in anti-clockwise direction without using any extra space.

#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
void rotateby90anti(int mat[R][C])
{
    //first step:transpose
    for(int i=0;i<R;i++)
    {
        for(int j=i;j<C;j++)//does'nt really affect when i==j,they will be at same pos after swap
        {
            swap(mat[i][j],mat[j][i]);
        }
    }

    //second step:reverse the col(such that matrix is rotated by 90 in anticlockwise direction)
    for(int i=0;i<R/2;i++)
    {
        for(int j=0;j<C;j++)
        {
            swap(mat[i][j],mat[R-i-1][j]);
        }
    }




}


void printmatrix(int mat[R][C])
{
    cout<<"\nMatrix after rotating it by 90deg in anti-clockwise direction:\n\n";
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
    rotateby90anti(mat);
    printmatrix(mat);

    return 0;


}
