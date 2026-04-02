//ques-. Check if all rows of a matrix are circular rotations of each other
#include<bits/stdc++.h>
#define SIZE 10
using namespace std;
bool rotatedpermutarows(int mat[SIZE][SIZE],int r,int c)
{
    string str_cat;//first row elements as string
    for(int i=0;i<r;i++)
    {
        str_cat+=to_string(mat[0][i]);

    }

    str_cat+=str_cat;


    //checking whether other rows stringss are substring of str_cat
    for(int i=1;i<r;i++)//begin with second rows as first row has be tackled above
    {
        string curr_str;
        for(int j=0;j<c;j++)
        {
            curr_str+=to_string(mat[i][j]);

        }
        if(str_cat.find(curr_str)==string::npos)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int r,c;
    cout<<"Enter rows and col for the matrix:";
    cin>>r>>c;
    int mat[SIZE][SIZE];
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
    if(rotatedpermutarows(mat,r,c))
    {
        cout<<"\nYes!All rows of a matrix are circular rotations of each other!!\n";
    }
    else
    {
        cout<<"\nNo!All rows of a matrix are not circular rotations of each other!!\n";

    }
    return 0;

}


