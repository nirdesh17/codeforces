#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,l; // n=number of words, i for loops, len= length of words.
    cin>>n; /// taking how many no. of word want to enter
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s; // input of string
        l=s.size(); // calculating length of string
        if(l<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s[0]<<l-2<<s[l-1]<<"\n";
        }
    }
    
    
   
    return 0;
}