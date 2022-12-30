#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,g;
    getline(cin, s);
    getline(cin, g);
    vector<char> a,b;
    a.push_back(s[0]);
    b.push_back(g[0]);
    for(ll i=1;i<s.length();i++)
    {
        if(s[i]==' ')
        a.push_back(s[i+1]);
    }
    for(ll i=1;i<g.length();i++)
    {
        if(g[i]==' ')
        b.push_back(g[i+1]);
    }
    bool yes=false;
    for(ll i=0;i<a.size();i++)
    {
        for(ll j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {yes=true;break;}
        }
        if(yes)
        break;
    }
    if(yes)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;
}