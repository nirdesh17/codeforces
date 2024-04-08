#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    string s;
    cin>>s;
    int o=0,z=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1') o++;
        else z++;
    }
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1') z--;
        else o--;

        if(z<0 || o<0)
        {
            cout<<max(z,o)<<endl;
            return;
        }
    }
    cout<<0<<endl;
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