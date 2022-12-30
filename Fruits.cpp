#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll a[n];
    string b[m];
    for(ll i=0;i<n;i++)
    cin>>a[i];

    for(ll i=0;i<n;i++)
    cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);
    
    return 0;
}