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
        for(ll i=0;i<n;i++)
        {
            ll result=0;
            for(ll j=0;j<n&& j!=i ;j++)
            {
                result=result^a[j];
            }
            if(result==a[i])
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }
    return 0;
}