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
        ll counter=0;
        for(ll i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])==1 || abs(a[i]-a[i+1])==n-1)
            {
                counter++;
            }
        }
        if(counter==n-1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}