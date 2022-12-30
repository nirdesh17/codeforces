#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll e[4];
    for(ll i=0;i<4;i++)
    {
        cin>>e[i];
    }
    sort(e,e+4);
    ll a=(e[0]-e[1]+e[2])/2;
    ll b=e[1]-e[2]+a;
    ll c=a-e[2];
    cout<<abs(a)<<" "<<abs(b)<<" "<<abs(c)<<endl;
    return 0;
}