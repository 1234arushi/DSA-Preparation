#include<bits/stdc++.h>
using namespace std;
int main()
{

    char text[]="this is mock test not an actual test";
    char pat[]="test";
    //find all the occurrences of pat[] in text[]
    int m=strlen(pat);
    int n=strlen(text);
    for(int i=0;i<=(n-m);i++)
    {

        int j;
        for(j=0;j<m;j++)
        {
            if(text[i+j]!=pat[j])break;
        }
        if(j==m)cout<<"Pattern occurred at index: "<<i<<endl;
    }
    return 0;
}
