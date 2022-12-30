#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll same(vector<ll> b,ll c)
{
    for(ll i=0;i<b.size();i++)
    {
        if(c==b[i])
        return c;
    }
    return -1;
}  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a;
    a.push_back(n);
    for(ll i=0;i>-1;i++)
    {
        n++;
        if(n%10==0)
        {
            while(n%10==0)
            {
                n=n/10;
            }
        }
        if(n==same(a,n))
        {
            break;
        }
        else
        a.push_back(n);
    }
    cout<<a.size()<<endl;
    return 0;
}