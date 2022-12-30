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

    ll max=1,MAX=-1;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        max++;
        else
        {
            if(max>MAX)
            MAX=max;

            max=1;
        }
    }
    if(max>MAX)
        MAX=max;

    //     for(ll i=0;i<n;i++)
    //     cout<<a[i]<<" ";
    //     cout<<endl;
    // // cout<<MAX<<endl;
    if(n-MAX>=MAX-1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}