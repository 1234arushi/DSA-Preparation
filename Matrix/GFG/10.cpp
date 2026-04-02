//ques-Given a matrix, check whether it’s Magic Square or not. A Magic Square is a n x n matrix of the distinct elements from 1 to n2 where the sum of any row, column, or diagonal is always equal to the same number.
#include<bits/stdc++.h>
using namespace std;
bool ismagicsqaure(int mat[4][4])
{
    int primediagsum=0,seconddiagsum=0;
    for(int i=0;i<4;i++)
    {
        primediagsum+=mat[i][i];
        seconddiagsum+=mat[i][4-i-1];

    }
    if(primediagsum!=seconddiagsum)
    {
        return false;
    }

    for(int i=0;i<4;i++)
    {
        int rowsum=0,colsum=0;
        for(int j=0;j<4;j++)
        {
            rowsum+=mat[i][j];
            colsum+=mat[j][i];
        }
        if(rowsum!=colsum || rowsum!=primediagsum)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int mat[4][4]={{16,2,3,13},{5,11,10,8},{9,7,6,12},{4,14,15,1}};

    if(ismagicsqaure(mat))
    {
        cout<<"It's a magic square!";
    }
    else
    {
        cout<<"It's not a magic square!";
    }
    return 0;

}

