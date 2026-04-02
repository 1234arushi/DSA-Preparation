//ques-Program to print the diagonal elements of matrix.
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
    //method 1: TC:O(n2)
    /*cout<<"\nPrincipal diagonal elements:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                cout<<mat[i][j]<<" ";

            }

        }

    }
    cout<<"\n";
    cout<<"\nSecondary diagonal elements:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if((i+j)==(r-1))
            {
                cout<<mat[i][j]<<" ";

            }

        }

    }
    cout<<"\n";*/

    //method 2:Tc:O(n)
    cout<<"\nPrincipal diagonal elements:";
    for(int i=0;i<r;i++)
    {
        cout<<mat[i][i]<<" ";
    }
    cout<<"\n";
    cout<<"Secondary diagonal elements:";
    int k=c-1;
    for(int i=0;i<r;i++)
    {
        cout<<mat[i][k--]<<" ";
    }

    cout<<"\n";
    
    return 0;




}
