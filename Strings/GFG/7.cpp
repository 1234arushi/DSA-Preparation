//https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/
#include<bits/stdc++.h>
using namespace std;

bool stringrotationcheck(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {

        return false;
    }

    string str=str1+str1;
    return(str.find(str2)!=string::npos);

}
int main()
{

    string str1,str2;
    cout<<"Enter a string:";
    getline(cin,str1);
    cout<<"Enter that string which you want to check in the original one such that whether it is rotation of it or not:";
    getline(cin,str2);
    if(stringrotationcheck(str1,str2))
    {
        cout<<"Yes!";
    }
    else
    {

        cout<<"No!";
    }
    return 0;
}
