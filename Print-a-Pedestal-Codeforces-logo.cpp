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
        ll a=(n/2), b=(n-a+3)/2,c=n-a-b;
        cout<<b<<" "<<a<<" "<<c<<endl;
    }
    return 0;
}