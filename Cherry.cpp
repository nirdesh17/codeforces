#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
        }
        ll Max=0;
        ll c=0;
        for(ll j=0;j<n-1;j++)
        {
            Max=max(Max,a[j]*a[j+1]);
        }
        cout<<Max<<endl;       
    }
    return 0;
}