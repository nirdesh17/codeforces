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
        ll n,k;
        cin>>n>>k;
        bool a[n];

        if((n<4 && k<4 ) || k%4==0)
        {
            cout<<"NO"<<endl;
            continue;;
        }
        for(ll i=0;i<n;i++)
        a[i]=0;


        vector<ll> b;
        ll c=4-(k%4),d;
         if(c==2)
         d=1;
         else
         d=4-c;
        

    while(c<=n && d<=n)
    {
        b.push_back(c);
        b.push_back(d);
        a[c-1]=1;
        a[d-1]=1;
        c+=4;
        d+=4;
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0)
        b.push_back(i+1);
    }
    cout<<"YES"<<endl;
    for(ll i=0;i<n;i+=2)
    cout<<b[i]<<" "<<b[i+1]<<endl;


    }
    return 0;
}