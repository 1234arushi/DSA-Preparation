#include<bits/stdc++.h>
using namespace std;
int main()
{

    //string str1="arsamushi";
    string str1="arsausamushi";
    string str2="sam";
    string str3="kya";
    int i;//->str1 pointer
    int j=0;//str2 pointer
    int n2=str2.size();
    for(i=0;i<str1.size();i++)
    {
        if(j==n2)
        {
            break;
        }

        if(str1[i]==str2[j])
        {


            j++;

        }
        else
        {

            j=0;
        }




    }

    int ii=i-3;
    int k=0;
    for(ii=i-3;ii<i;ii++)
    {
        str1[ii]=str3[k++];

    }
    cout<<str1<<endl;
    return 0;
}
