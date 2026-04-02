#include<bits/stdc++.h>
using namespace std;
#define d 256
void karp(char text[],char pat[],int q)
{

    int m=strlen(pat);
    int n=strlen(text);
    int i,j;
    int p=0,t=0;//curr hash value for pat,text
    int h=1;
    for(int i=0;i<m-1;i++)
    {

        h=(h*d)%q;//h=pow(d,m-1) calc kr rhe
    }
    for(int i=0;i<m;i++)
    {
        p=(d*p+pat[i])%q;
        t=(d*t+text[i])%q;
    }
    for(int i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            for(j=0;j<m;j++)
            {
                if(text[i+j]!=pat[j])break;
            }
            if(j==m)
            {
                cout<<"Pattern found at index: "<<i<<endl;
            }
        }
        if(i<n-m)
        {
            t=(d*(t-text[i]*h)+text[i+m])%q;
            if(t<0)t=(t+q);
        }

    }

}
int main()
{

    char text[]="aaabbabbd";
    char pat[]="abb";
    int q=INT_MAX;//mod to avoid overflow
    karp(text,pat,q);
    return 0;
}
