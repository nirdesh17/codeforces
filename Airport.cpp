#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll a[m],b[m];
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    ll n1=n,n2=n;
    sort(a,a+m,greater<ll>());
    sort(b,b+m);
    // for max
    ll sum=0;
    while(n1>0)
    {
        if(n1<=m)
        {
            for(ll i=0;i<n1;i++)
            {
                sum=sum+a[i];
            }
            n1=n1-m;
        }
        else
        {
            for(ll i=0;i<m;i++)
            {
                sum=sum+a[i];
                a[i]=a[i]-1;
            }
            n1=n1-m;
        }
    }
    //  for min
    ll SUM=0;
    for(ll i=0;i<m;i++)
    {
        if(n2>0)
        {   
            while(b[i]>0)
            {
                SUM=SUM+b[i];
                b[i]=b[i]-1;
                n2=n2-1;
            }
        }
        else
        break;
    }

    cout<<sum<<" "<<SUM<<endl;
    return 0;
}