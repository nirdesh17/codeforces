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
        ll a[3],sum=0;
        for(ll i=0;i<3;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        cout<<sum/2<<endl;
    }
    return 0;
}