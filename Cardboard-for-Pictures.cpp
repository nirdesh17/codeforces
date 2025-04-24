#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll area(vector<ll>& a,ll m,ll c)
{
    ll sum=0;
    for(int i = 0; i < a.size(); ++i) 
    {
        sum += (a[i] + 2 * m) * (a[i] + 2 * m);
        if(sum > c) break;
    }
    return sum;
}
void solve()
{
    ll n,c;
    cin>>n>>c;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int l=1,h=1e9;
    while(l<=h)
    {
        ll m=l + (h - l) / 2;
        if(area(a,m,c)==c)
        {
            cout<<m<<endl;
            break;
        }
        else if(area(a,m,c)>c) 
            h=m-1;
        else if(area(a,m,c)<c)
            l=m+1;
    }
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}