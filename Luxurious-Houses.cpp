#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];

    ll max=-1;
    for(ll i=n-1;i>-1;i--)
    {
       if(a[i]>max)
       {
            max=a[i];
            b[i]=0;
       }
       else if(a[i]==max)
       {
            b[i]=1;
       }
       else
       {
            b[i]=max-a[i]+1;
       }
    }

    for(ll i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}