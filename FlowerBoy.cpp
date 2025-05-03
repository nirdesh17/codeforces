#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T mx(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T mn(T x,T y)
{
    return x<y?x:y;
}


void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<m;i++)
    {
        cin>>b[i];
    }

    ll inf=LLONG_MAX;
    ll inf_=LLONG_MIN;
    vector<ll> p(m,inf);
    vector<ll> s(m,inf_);

    ll i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]>=b[j])
        {
            p[j]=i;
            i++;j++;
        }
        else
        {
            i++;
        }
    }
    i=n-1,j=m-1;
    while(i>=0 && j>=0)
    {
        if(a[i]>=b[j])
        {
            s[j]=i;
            i--;j--;
        }
        else
        {
            i--;
        }
    }

    if(p[m-1]!=inf)
    {
        cout<<0<<endl;
        return;
    }

    ll ans=INT_MAX;
    for(int i=1;i<m-1;i++)
    {
        if(p[i-1]<s[i+1])
        {
            ans=mn(ans,b[i]);
        }
    }

    if(s[1]!=inf_)
    {
        ans=mn(ans,b[0]);
    }
    if(p[m-2]!=inf)
    {
        ans=mn(ans,b[m-1]);
    }

    if(ans==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

