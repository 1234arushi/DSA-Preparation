#include<bits/stdc++.h>
using namespace std;
vector<int>prefix_fun(string pat)
{

    int n=pat.size();

    vector<int>pi(n,0);
    for(int i=1;i<n;i++)
    {
        int j=pi[i-1];
        while(j>0 && pat[i]!=pat[j])
        {
            j=pi[j-1];

        }
        if(pat[i]==pat[j])
        {
            j++;
        }
        pi[i]=j;
    }
    return pi;

}
int main()
{
    string text="aaaaab";
    string pat="aab";
    vector<int>res=prefix_fun(pat);
    int pos=-1;
    int i=0,j=0;
    while(i<text.size())
    {

        if(pat[j]==text[i])
        {
            j++;i++;
        }
        else{
            if(j!=0)
            {
                j=res[j-1];
            }
            else
            {
                i++;
            }
        }
        if(j==pat.size())
        {

            pos=(i-pat.size());
            break;
        }
    }
    cout<<"pattern occurred at index:"<<pos<<endl;
    return 0;


}
