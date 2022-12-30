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

    ll counter=1,max=1;
    bool yes=true;
    for(ll i=0;i<n-1;i++)
    {
        if(2*a[i]>=a[i+1])
        {counter++;yes=true;}
        else
        {counter=1;yes=false;}
        if(max<counter)
        max=counter;
    }
    // if(yes)
    // cout<<1+max<<endl;
    // else
    cout<<max<<endl;
    return 0;
}