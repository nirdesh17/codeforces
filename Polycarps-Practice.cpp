#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n,greater<ll>());
    vector<ll> c;
    ll sum=0;
    for(ll i=0;i<k;i++)
    {
        c.push_back(b[i]);
        sum=sum+c[i];
    }
    unordered_set<ll> d;
    ll counter=1;
    
    for(ll j=0;j<k;j++)
    {
        for(ll i=0;i<n;i++)
        {
            if(a[i]==c[j])
            {
                d.insert(i);
                break;
            }
        }
    }
    vector<ll> v(d.begin(),d.end());
    sort(v.begin(),v.end());
    cout<<sum<<endl;
    ll SUM=0;
    cout<<v[0]+1<<" ";
    for(ll i=1;i<v.size()-1;i++)
    {
        cout<<v[i]-SUM<<" ";
        SUM=SUM+v[i];
    }
    cout<<v[v.size()-1]-v[v.size()-2]+n-v[v.size()-1]-1<<endl;
    cout<<endl;
   
    
    return 0;
}