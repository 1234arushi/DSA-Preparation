//ques-Program to print Lower triangular and Upper triangular matrix of an array.
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

    cout<<"\nUpper triangular matrix:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i<=j)
            {
                cout<<mat[i][j]<<" ";

            }
            else
            {
                cout<<0<<" ";
            }

        }
        cout<<"\n";
    }
    cout<<"\nLower triangular matrix:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j<=i)
            {
                cout<<mat[i][j]<<" ";

            }
            else
            {
                cout<<0<<" ";
            }

        }
        cout<<"\n";
    }
    return 0;




}

