#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    ll cnt=0;
    while(n>1)
    {
        if(n%6==0)
        {
            n=n/6;
            cnt++;
        }
        else if(n%3==0)
        {
            n=n*2;
            cnt++;
        }
        else
        {
            cout<<"-1"<<endl;
            return;
        }
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