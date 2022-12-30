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
        ll a[n],b[n];
        string s[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i]>>s[i];
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<b[i];j++)
            {
                if(s[i][j]=='D')
                {
                    a[i]++;
                    if(a[i]>9)
                    a[i]=0;
                }
                else
                {
                    a[i]--;
                    if(a[i]<0)
                    a[i]=9;
                }
            }
        }
        for(ll i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}