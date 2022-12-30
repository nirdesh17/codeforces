#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a[5];
    ll sum=0;
    for(ll i=0;i<5;i++)
    {cin>>a[i];sum=sum+a[i];}
    if(sum%5==0 && sum>0)
    cout<<sum/5<<endl;
    else
    cout<<-1<<endl;

    return 0;
}