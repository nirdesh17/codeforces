#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll i=0,j=0;
    ll cnt=0;
    while(j<k)
    {
        if(s[j]=='W')
            cnt++;
        j++;
        // cout<<"cnt"<<cnt;
    }
    i++;
    ll sum=cnt;
    while(i<n && j<n)
    {
        if(s[i-1]=='W')
            cnt--;
        if(s[j]=='W')
            cnt++;
        
        sum=min(sum,cnt);
        i++;j++;
    }
    cout<<sum<<endl;
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