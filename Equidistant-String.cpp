#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,g;
    cin>>s>>g;
    ll count=0;
    vector<ll> a;
    string b;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]!=g[i])
        { 
            count++;
            a.push_back(i);
        }
    }
    if(count%2!=0)
    {
        cout<<"impossible"<<endl;
    }
    else if((s.length()==1 && g.length()==1) && s[0]==g[0])
    {
        if(s[0]=='0')
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }
    else
    {
        b=b+s.substr(0 , a[a.size()/2-1]+1);
        b=b+g.substr(a[a.size()/2-1]+1 , g.length());
        // for(ll i=0;i<=a[a.size()/2-1];i++)
        // {
        //     b=b+s[i];
        // }
        // for(ll i=a[a.size()/2-1]+1;i<g.length();i++)
        // {
        //     b=b+g[i];
        // }
        cout<<b<<endl;
    }
    return 0;
}