#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll j=0;j<t;j++)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll e=a/b,f=(c-1)/b,g=d/b;
        cout<<e-g+f<<endl;
    }
    return 0;
}