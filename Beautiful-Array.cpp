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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        ll a[n];
        if(k*b>s)
        {
            cout<<-1<<endl;
            continue;
        }
        
        a[n-1]=k*b;
        s=s-a[n-1];
        if(n==1)
        {
            if(s>0)
            {cout<<-1<<endl;
            continue;}
            else
            {
                cout<<a[n-1]<<endl;
                continue;
            }
        }
        else if(s/(n-1)>k)
        {
            if(s-k*(n-1)<=a[n-1]/k)
            {
                a[n-1]=s-k*(n-1)+a[n-1];
                s=s-k*(n-1);
            }
            else{
                cout<<-1<<endl;
                continue;
                }
        }
    
            ll i=n-2;
            while(i>=0 && k<=s)
            {
                a[i]=k-1;
                s=s-a[i];
                i--;
            }
            if(i>=0)
            {a[i]=s;
            for(ll j=0;j<i;j++)
            {
                a[j]=0;
            }}
            for(ll j=0;j<n;j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<endl;
        
    }
    return 0;
}