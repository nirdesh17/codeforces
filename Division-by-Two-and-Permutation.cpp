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

        sort(a,a+n);

        bool yes=true;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==i+1)
            continue;
            else
            {
                while(a[i]!=i+1 || a[i]!=0)
                {
                    a[i]=a[i]/2;
                }
                if(a[i]==i+1)
                continue;
                else
                {yes=false;break;}
            }
        }
        if(yes)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}