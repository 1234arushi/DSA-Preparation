//Ques.Rotate the matrix elements clockwise.
#include<bits/stdc++.h>
#define R 4   //why is it necessary to use capital letters with #define keyword
#define C 4
using namespace std;
void rotatematrix(int r,int c,int mat[R][C])
{
    //row-starting row index   col-starting col index
    int row=0,col=0;
    int prev,curr;
    //r=row-->m   c=col-->n
    while(row<r && col<c)
    {
        if(row+1 == r || col+1 == c)
        {
            break;
        }
        prev=mat[row+1][col];

        //move elements if first row from the remaining rows
        for(int i=col;i<c;i++)
        {
            curr=mat[row][i];
            mat[row][i]=prev;
            prev=curr;
        }
        row++;

        //move elements of last col from remaining columns

        for(int i=row;i<r;i++)
        {
            curr=mat[i][c-1];
            mat[i][c-1]=prev;
            prev=curr;
        }
        c--;

        //move elements of last row from remaining rows
        if(row<r)
        {
            for(int i=c-1;i>=col;i--)
            {
                curr=mat[r-1][i];
                mat[r-1][i]=prev;
                prev=curr;
            }
        }
        r--;

        //move elements of first col from remaining rows
        if(col<c)
        {
            for(int i=r-1;i>=row;i--)
            {
                curr=mat[i][col];
                mat[i][col]=prev;
                prev=curr;
            }
        }
        col++;
    }
    cout<<"\n\n";
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

    int mat[R][C]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}} ;
    cout<<"matrix:\n";
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\nMatrix after clockwise rotation:";
    rotatematrix(R,C,mat);
    return 0;
}

