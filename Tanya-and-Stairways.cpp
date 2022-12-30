#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll counter=1;
    vector<ll> b;
    for(ll i=1;i<n;i++)
    {
        if(a[i]==1)
        {
            counter++;
            b.push_back(a[i-1]);
        }       
    }
    b.push_back(a[n-1]);
    cout<<counter<<endl;
    for(ll i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}