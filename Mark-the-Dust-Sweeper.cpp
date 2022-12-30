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
        ll counter=0,sum=0,b=-1;
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]!=0)
            {
                b=i;
                break;
            }
        }
        if(b!=-1)
        {
            for(ll i=b;i<n-1;i++)
            {
                if(a[i]==0)
                {
                    counter++;
                }
                sum=sum+a[i];
            }
        cout<<sum+counter<<endl;
        }
        else
        cout<<0<<endl;
    }
    return 0;
}