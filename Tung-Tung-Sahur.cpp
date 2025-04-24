#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T max(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T min(T x,T y)
{
    return x<y?x:y;
}


void solve() {
    string s,p;
    cin>>s;
    cin>>p;
    vector<pair<char,ll>> mp_s;
    ll L=0,R=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='L')
        {
            if(R>0)
            {
                mp_s.push_back({'R',R});
                R=0;
            }
            L++;

        }
        else
        {
            if(L>0)
            {
                mp_s.push_back({'L',L});
                L=0;
            }
            R++;
        }
    }
    if(R>0)
    {
        mp_s.push_back({'R',R});
        R=0;
    }
    if(L>0)
    {
        mp_s.push_back({'L',L});
        L=0;
    }

    vector<pair<char,ll>> mp_p;
    for(int i=0;i<p.length();i++)
    {
        if(p[i]=='L')
        {
            if(R>0)
            {
                mp_p.push_back({'R',R});
                R=0;
            }
            L++;

        }
        else
        {
            if(L>0)
            {
                mp_p.push_back({'L',L});
                L=0;
            }
            R++;
        }
    }
    if(R>0)
    {
        mp_p.push_back({'R',R});
        R=0;
    }
    if(L>0)
    {
        mp_p.push_back({'L',L});
        L=0;
    }

    if(mp_s.size()!=mp_p.size())
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<mp_s.size();i++)
    {
        if(mp_s[i].first!=mp_p[i].first)
        {
            cout<<"NO"<<endl;
            return;
        }
        else if(mp_p[i].second>mp_s[i].second*2 || mp_p[i].second<mp_s[i].second)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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