#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int power(ll n)
{
    ll sum=1;
    for(ll i=0;i<n;i++)
    {
        sum=sum*10;
    }
    return sum;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c;
    cin>>a>>b>>c;
    ll n;
    cin>>n;
    ll d=power(c);
    ll e=power(b);
    string f = to_string(n%e);
    string g;
    char k='0';
    for(ll i=0;i<abs(b-c)-1;i++)
    {
        g.push_back(k);
    }
    g.push_back('1');
    for(ll i=0;i<c;i++)
    {
        g.push_back(k);
    }
    ll counter=0;
    
    string h;
    
    if(f.length()<g.size())
    {
        for(ll i=0;i<g.size()-f.length();i++)
        {
            h.push_back(k);
        }
    }
    f=h+f;
    for(ll i=0;i<g.length();i++)
    {
        if(g[i]!=f[i])
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}