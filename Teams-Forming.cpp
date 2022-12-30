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
    cin>>a[i];
    sort(a,a+n);
    ll sum=0;
    for(ll i=0;i<n;i+=2)
    {
        sum=sum+a[i+1]-a[i];
    }
    cout<<sum<<endl;
    return 0;
}