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
        if(n%2==0)
        {
            cout<<"Joe"<<endl;
        }
        else
        {
            cout<<"Mike"<<endl;
        }
    }
    return 0;
}