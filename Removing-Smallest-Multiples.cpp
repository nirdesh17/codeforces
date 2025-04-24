#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string mark(n,'1');
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            for(int j=i+1;j<=n;j+=i+1)
            {
                if(s[j-1]=='1')
                    break;
                
                if(mark[j-1]=='0')
                    continue;
                mark[j-1]='0';
                ans+=i+1;
            }   
        }
    }
    cout<<ans<<endl;
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










// https://www.youtube.com/watch?v=EZLKYkppDuw