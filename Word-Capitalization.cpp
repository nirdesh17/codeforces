#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if((int)s[0]>=97 && (int)s[0]<=122)
    {
        int x;
        x=122-(int)s[0];
        int p;
        p=90-x;
        s[0]=(char)p;
        cout<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }

    return 0;
}