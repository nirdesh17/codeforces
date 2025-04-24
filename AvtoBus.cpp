#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    if(n%2!=0 || n<4)
    {
        cout<<-1<<endl;
        return;
    }

    ll mn=n/6;
    if(n%6!=0)
    {
        mn++;
    }
    ll mx=n/4;
    cout<<mn<<" "<<mx<<endl;
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