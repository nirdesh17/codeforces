#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a[3],b[3];
    for(ll i=0;i<3;i++)
    cin>>a[i];
    for(ll i=0;i<3;i++)
    cin>>b[i];
    if(a[0]==b[0] || a[1]==b[1] || a[2]==b[2])
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}