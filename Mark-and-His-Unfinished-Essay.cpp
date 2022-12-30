#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;
        for(ll i=0;i<c;i++)
        {
            ll e,f;
            cin>>e>>f;
            s=s+s.substr(e-1,f-e+1);
        }
        for(ll i=0;i<q;i++)
        {
            ll g;
            cin>>g;
            cout<<s[g-1]<<endl;
        }
    }
    return 0;
}