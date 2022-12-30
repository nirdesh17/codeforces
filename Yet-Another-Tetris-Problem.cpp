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
        ll b=*min_element(a,a+n);
        for(ll i=0;i<n;i++)
        {
            a[i]=a[i]-b;
        }
        bool c=true;
        for(ll i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                c=false;
                break;
            }
        }
        if(c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}