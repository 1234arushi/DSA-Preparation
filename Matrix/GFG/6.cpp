//ques-You have given an integer matrix with odd dimensions. Find the square of the diagonals elements on both sides
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
    cout<<"\nPrincipal diagonal elements:";
    for(int i=0;i<r;i++)
    {
        cout<<mat[i][i]*mat[i][i]<<" ";
    }
    cout<<"\n";
    cout<<"Secondary diagonal elements:";

    for(int i=0;i<r;i++)
    {
        cout<<mat[i][r-i-1]*mat[i][r-i-1]<<" ";
    }

    cout<<"\n";
    return 0;
}

