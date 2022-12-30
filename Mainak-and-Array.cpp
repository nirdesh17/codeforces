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
        cin>>a[i];
        ll d,e,MAX=INT_MIN;
        ll c=*min_element(a,a+n),b=*max_element(a,a+n);
        for(ll i=0;i<n;i++)
        {
            if(a[i]==c)
            d=i;
            if(a[i]==b)
            e=i;
        }
        if(a[0]==c || a[n-1]==b || e-d==1)
        {
            cout<<b-c<<endl;
        }
        else
        {
            MAX=max(a[n-1]-a[d],MAX);
            MAX=max(a[e]-a[0],MAX);
            for(ll i=1;i<n;i++)
            {
                MAX=max(a[i]-a[i-1],MAX);
            }
            cout<<MAX<<endl;
        }

        
    }
    return 0;
}