#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    vector<int> s,t;
    for(auto i:v)
    {
        if(s.empty())
        {
            s.push_back(i);
            continue;
        }
        else if(t.empty())
        {
            t.push_back(i);
            continue;
        }

        if(s.back()>i)
        {
            s.push_back(i);
        }
        else
        {
            t.push_back(i);
        }
    }
    ll cnt=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]>s[i-1])
            cnt++;
    }
    for(int i=1;i<t.size();i++)
    {
        if(t[i]>t[i-1])
            cnt++;
    }
    
    cout<<cnt<<endl;
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