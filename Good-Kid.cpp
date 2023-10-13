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
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        a[0]+=1;
        ll ans=1;
        for(int i=0;i<n;i++)
            ans*=a[i];

        cout<<ans<<endl;
    }
    return 0;
}