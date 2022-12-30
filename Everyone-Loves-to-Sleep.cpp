#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n,h,m;
        cin>>n>>h>>m;
        ll min1=25,min2=61;
        for(ll j=0;j<n;j++)
        {
            ll a,b;
            cin>>a>>b;
            if(min1>a)
            {
                min1=a;
                min2=b;
            }
        }
       h=h*60;
       ll sum=h+m;
       min1=min1*60;
       ll SUM=min1+min2;
        if(sum<=SUM)
        {
            cout<<abs(SUM-sum)/60<<" "<<abs(SUM-sum)%60<<endl;
        }
        else
        {
            sum=abs(sum-(24*60));
            cout<<(sum+SUM)/60<<" "<<(sum+SUM)%60<<endl;
        }

    }
    return 0;
}