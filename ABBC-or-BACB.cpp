#include<bits/stdc++.h>
using namespace std;
#define ll long long int
   
void solve()
{
    string s;
    cin>>s;
    ll n=s.length(),cnt=0;
    bool all=(s[0]=='B' || s[n-1]=='B');

    for(ll i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1] && s[i]=='B')
            all=true;
    }

    vector<ll> l;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            cnt++;
        }
        else
        {
            if(cnt!=0)
            {
                l.push_back(cnt);
            }
            cnt=0;
        }
    }

    if(cnt!=0) l.push_back(cnt);
    sort(l.begin(),l.end());

    if(l.empty())
    {
        cout<<0<<endl;
        return;
    }

    ll tot=0;
    if(all) tot+=l[0];

    for(int i=1;i<l.size();i++)
        tot+=l[i];

    cout<<tot<<endl;
}
     
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    { solve(); }
    return 0;
}