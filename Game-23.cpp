#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,ans=0;
    cin>>n>>m;
    if(n==m)
    cout<<0<<endl;
    else if(m%n!=0)
    cout<<-1<<endl;
    else
    {
        ll d=m/n;
        while(d%2==0)
        {
            d=d/2;
            ans++;
        }
        while(d%3==0)
        {
            d=d/3;
            ans++;
        }
        if(d!=1)
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }
    return 0;
}