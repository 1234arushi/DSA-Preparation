//https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
nclude<bits/stdc++.h>
using namespace std;
//TC->O(N) where N = length of the string passed and it takes O(1) time to insert and access any element in an unordered map
// SC->O(K) where K = size of the map (0<=K<=input_string_length).
printduplicates(string s)
{

    unordered_map<char,int> umap;
    for(int i=0;s[i]!='\0';i++)
    {

        umap[s[i]]++;
    }
    unordered_map<char,int>::iterator it;
    cout<<"Printing the duplicates and their counts:\n";
    for(it=umap.begin();it!=umap.end();it++)
    {


        if(it->second>1)
        {

            cout<<"Duplicate:"<<it->first<<" , "<<"count= "<<it->second<<endl;
        }
    }
}

int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);//helps to input string with blank space
     //cin>>str;//does not take string with blank space
    printduplicates(str);
    return 0;

}
