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
  
      sort(a,a+n,greater<ll>());

    for(ll i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
            a[i]--;

        else if(a[i]>a[i-1])
            a[i]=a[i-1]-1;
            
        if(a[i]<0)
            a[i]=0;
    }
    ll count=0;
   for(ll i=0;i<n;i++)
        count+=a[i];

    cout<<count;
    return 0;
}