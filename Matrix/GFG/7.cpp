//ques-Given a square matrix, swap the element of major and minor diagonals.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter rows and columns of matrix:";
    cin>>r>>c;
    int mat[r][c];
    cout<<"Enter the elements for the matrix:";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }

    cout<<"\nMatrix:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

    int temp;
    int k=c-1;
    for(int i=0;i<r;i++)
    {
        temp=mat[i][i];

        mat[i][i]=mat[i][k];
        mat[i][k]=temp;
        k--;
    }

     cout<<"\n\nMatrix after swapping  the elements of major and minor diagonals:\n\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
