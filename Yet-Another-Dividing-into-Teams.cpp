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
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        vector<ll> b;
        for(ll i=0;i<n/2;i++)
        {
            b.push_back(a[i]);
            b.push_back(a[n-i-1]);
        }
        if(n%2!=0)
        {
            b.push_back(a[n/2]);
        }
        ll counter=0;
        for(ll i=0;i<n-1;i+=2)
        {
            if(b[i+1]-b[i]!=1)
            counter++;
        }
        if(n==1)
        cout<<counter+1<<endl;
        else
        cout<<counter<<endl;
    }
    return 0;
}