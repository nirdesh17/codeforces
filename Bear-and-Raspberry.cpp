#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll a[n],b(0);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(ll i=0;i<n;i++)
    b=max(b,a[i]-a[i+1]-m);

    cout<<b<<endl;
    return 0;
}